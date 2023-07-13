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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MODIFYAUDITSERVICERESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MODIFYAUDITSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * ModifyAuditService返回参数结构体
                */
                class ModifyAuditServiceResponse : public AbstractModel
                {
                public:
                    ModifyAuditServiceResponse();
                    ~ModifyAuditServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取审计配置修改结果，0-修改成功,非0-修改失败。
                     * @return Success 审计配置修改结果，0-修改成功,非0-修改失败。
                     * 
                     */
                    int64_t GetSuccess() const;

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                private:

                    /**
                     * 审计配置修改结果，0-修改成功,非0-修改失败。
                     */
                    int64_t m_success;
                    bool m_successHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MODIFYAUDITSERVICERESPONSE_H_
