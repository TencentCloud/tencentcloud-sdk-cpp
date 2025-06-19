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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DELETEVARREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DELETEVARREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DeleteVar请求参数结构体
                */
                class DeleteVarRequest : public AbstractModel
                {
                public:
                    DeleteVarRequest();
                    ~DeleteVarRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return AppBizId 应用ID
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置应用ID
                     * @param _appBizId 应用ID
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取变量ID
                     * @return VarId 变量ID
                     * 
                     */
                    std::string GetVarId() const;

                    /**
                     * 设置变量ID
                     * @param _varId 变量ID
                     * 
                     */
                    void SetVarId(const std::string& _varId);

                    /**
                     * 判断参数 VarId 是否已赋值
                     * @return VarId 是否已赋值
                     * 
                     */
                    bool VarIdHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 变量ID
                     */
                    std::string m_varId;
                    bool m_varIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DELETEVARREQUEST_H_
