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
                     * 获取应用 ID，在控制台统一创建。
                     * @return BizId 应用 ID，在控制台统一创建。
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用 ID，在控制台统一创建。
                     * @param BizId 应用 ID，在控制台统一创建。
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取查询的任务 ID 列表，任务 ID 列表最多支持 100 个。
                     * @return TaskIdList 查询的任务 ID 列表，任务 ID 列表最多支持 100 个。
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置查询的任务 ID 列表，任务 ID 列表最多支持 100 个。
                     * @param TaskIdList 查询的任务 ID 列表，任务 ID 列表最多支持 100 个。
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     */
                    bool TaskIdListHasBeenSet() const;

                private:

                    /**
                     * 应用 ID，在控制台统一创建。
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 查询的任务 ID 列表，任务 ID 列表最多支持 100 个。
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULTLISTREQUEST_H_
