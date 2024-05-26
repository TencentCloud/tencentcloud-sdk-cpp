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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ASSIGNTWECALLLICENSEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ASSIGNTWECALLLICENSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * AssignTWeCallLicense请求参数结构体
                */
                class AssignTWeCallLicenseRequest : public AbstractModel
                {
                public:
                    AssignTWeCallLicenseRequest();
                    ~AssignTWeCallLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取voip类型
                     * @return PkgType voip类型
                     * 
                     */
                    int64_t GetPkgType() const;

                    /**
                     * 设置voip类型
                     * @param _pkgType voip类型
                     * 
                     */
                    void SetPkgType(const int64_t& _pkgType);

                    /**
                     * 判断参数 PkgType 是否已赋值
                     * @return PkgType 是否已赋值
                     * 
                     */
                    bool PkgTypeHasBeenSet() const;

                    /**
                     * 获取appId
                     * @return MiniProgramAppId appId
                     * 
                     */
                    std::string GetMiniProgramAppId() const;

                    /**
                     * 设置appId
                     * @param _miniProgramAppId appId
                     * 
                     */
                    void SetMiniProgramAppId(const std::string& _miniProgramAppId);

                    /**
                     * 判断参数 MiniProgramAppId 是否已赋值
                     * @return MiniProgramAppId 是否已赋值
                     * 
                     */
                    bool MiniProgramAppIdHasBeenSet() const;

                    /**
                     * 获取License数
                     * @return DeductNum License数
                     * 
                     */
                    int64_t GetDeductNum() const;

                    /**
                     * 设置License数
                     * @param _deductNum License数
                     * 
                     */
                    void SetDeductNum(const int64_t& _deductNum);

                    /**
                     * 判断参数 DeductNum 是否已赋值
                     * @return DeductNum 是否已赋值
                     * 
                     */
                    bool DeductNumHasBeenSet() const;

                private:

                    /**
                     * voip类型
                     */
                    int64_t m_pkgType;
                    bool m_pkgTypeHasBeenSet;

                    /**
                     * appId
                     */
                    std::string m_miniProgramAppId;
                    bool m_miniProgramAppIdHasBeenSet;

                    /**
                     * License数
                     */
                    int64_t m_deductNum;
                    bool m_deductNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ASSIGNTWECALLLICENSEREQUEST_H_
