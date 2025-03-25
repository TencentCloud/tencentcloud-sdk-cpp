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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYYARNDEPLOYRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYYARNDEPLOYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyYarnDeploy返回参数结构体
                */
                class ModifyYarnDeployResponse : public AbstractModel
                {
                public:
                    ModifyYarnDeployResponse();
                    ~ModifyYarnDeployResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取为false不点亮部署生效、重置
                     * @return IsDraft 为false不点亮部署生效、重置
                     * 
                     */
                    bool GetIsDraft() const;

                    /**
                     * 判断参数 IsDraft 是否已赋值
                     * @return IsDraft 是否已赋值
                     * 
                     */
                    bool IsDraftHasBeenSet() const;

                    /**
                     * 获取错误信息，预留
                     * @return ErrorMsg 错误信息，预留
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 为false不点亮部署生效、重置
                     */
                    bool m_isDraft;
                    bool m_isDraftHasBeenSet;

                    /**
                     * 错误信息，预留
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYYARNDEPLOYRESPONSE_H_
