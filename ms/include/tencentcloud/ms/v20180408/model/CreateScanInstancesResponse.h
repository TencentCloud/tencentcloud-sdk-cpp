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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CREATESCANINSTANCESRESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CREATESCANINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateScanInstances返回参数结构体
                */
                class CreateScanInstancesResponse : public AbstractModel
                {
                public:
                    CreateScanInstancesResponse();
                    ~CreateScanInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务唯一标识
                     * @return ItemId 任务唯一标识
                     */
                    std::string GetItemId() const;

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     * @return Progress 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取提交成功的app的md5集合
                     * @return AppMd5s 提交成功的app的md5集合
                     */
                    std::vector<std::string> GetAppMd5s() const;

                    /**
                     * 判断参数 AppMd5s 是否已赋值
                     * @return AppMd5s 是否已赋值
                     */
                    bool AppMd5sHasBeenSet() const;

                    /**
                     * 获取剩余可用次数
                     * @return LimitCount 剩余可用次数
                     */
                    uint64_t GetLimitCount() const;

                    /**
                     * 判断参数 LimitCount 是否已赋值
                     * @return LimitCount 是否已赋值
                     */
                    bool LimitCountHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return LimitTime 到期时间
                     */
                    uint64_t GetLimitTime() const;

                    /**
                     * 判断参数 LimitTime 是否已赋值
                     * @return LimitTime 是否已赋值
                     */
                    bool LimitTimeHasBeenSet() const;

                private:

                    /**
                     * 任务唯一标识
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 提交成功的app的md5集合
                     */
                    std::vector<std::string> m_appMd5s;
                    bool m_appMd5sHasBeenSet;

                    /**
                     * 剩余可用次数
                     */
                    uint64_t m_limitCount;
                    bool m_limitCountHasBeenSet;

                    /**
                     * 到期时间
                     */
                    uint64_t m_limitTime;
                    bool m_limitTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CREATESCANINSTANCESRESPONSE_H_
