/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CHECKUPDATEINSTANCERESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CHECKUPDATEINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CheckUpdateInstance返回参数结构体
                */
                class CheckUpdateInstanceResponse : public AbstractModel
                {
                public:
                    CheckUpdateInstanceResponse();
                    ~CheckUpdateInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否允许变配操作
                     * @return AllowUpdate 是否允许变配操作
                     * 
                     */
                    bool GetAllowUpdate() const;

                    /**
                     * 判断参数 AllowUpdate 是否已赋值
                     * @return AllowUpdate 是否已赋值
                     * 
                     */
                    bool AllowUpdateHasBeenSet() const;

                    /**
                     * 获取不允许变配的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg 不允许变配的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取是否需要设置分片迁移并发相关参数
                     * @return NeedSetShards 是否需要设置分片迁移并发相关参数
                     * 
                     */
                    bool GetNeedSetShards() const;

                    /**
                     * 判断参数 NeedSetShards 是否已赋值
                     * @return NeedSetShards 是否已赋值
                     * 
                     */
                    bool NeedSetShardsHasBeenSet() const;

                    /**
                     * 获取是否需要开启置放群组异步任务
                     * @return EnableScheduleRecoverGroupTask 是否需要开启置放群组异步任务
                     * 
                     */
                    bool GetEnableScheduleRecoverGroupTask() const;

                    /**
                     * 判断参数 EnableScheduleRecoverGroupTask 是否已赋值
                     * @return EnableScheduleRecoverGroupTask 是否已赋值
                     * 
                     */
                    bool EnableScheduleRecoverGroupTaskHasBeenSet() const;

                private:

                    /**
                     * 是否允许变配操作
                     */
                    bool m_allowUpdate;
                    bool m_allowUpdateHasBeenSet;

                    /**
                     * 不允许变配的原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 是否需要设置分片迁移并发相关参数
                     */
                    bool m_needSetShards;
                    bool m_needSetShardsHasBeenSet;

                    /**
                     * 是否需要开启置放群组异步任务
                     */
                    bool m_enableScheduleRecoverGroupTask;
                    bool m_enableScheduleRecoverGroupTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CHECKUPDATEINSTANCERESPONSE_H_
