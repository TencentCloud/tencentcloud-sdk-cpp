/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULTLISTREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeScanResultList请求参数结构体
                */
                class DescribeScanResultListRequest : public AbstractModel
                {
                public:
                    DescribeScanResultListRequest();
                    ~DescribeScanResultListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID，登录[控制台](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * @return BizId 应用 ID，登录[控制台](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用 ID，登录[控制台](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * @param _bizId 应用 ID，登录[控制台](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取查询的任务 ID 列表，任务 ID 列表最多支持 100 个。
                     * @return TaskIdList 查询的任务 ID 列表，任务 ID 列表最多支持 100 个。
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置查询的任务 ID 列表，任务 ID 列表最多支持 100 个。
                     * @param _taskIdList 查询的任务 ID 列表，任务 ID 列表最多支持 100 个。
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取任务返回结果数量，默认10，上限500。大文件任务忽略此参数，返回全量结果
                     * @return Limit 任务返回结果数量，默认10，上限500。大文件任务忽略此参数，返回全量结果
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置任务返回结果数量，默认10，上限500。大文件任务忽略此参数，返回全量结果
                     * @param _limit 任务返回结果数量，默认10，上限500。大文件任务忽略此参数，返回全量结果
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 应用 ID，登录[控制台](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 查询的任务 ID 列表，任务 ID 列表最多支持 100 个。
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * 任务返回结果数量，默认10，上限500。大文件任务忽略此参数，返回全量结果
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULTLISTREQUEST_H_
