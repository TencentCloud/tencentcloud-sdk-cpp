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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYLIVENESSTOKENREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYLIVENESSTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ApplyLivenessToken请求参数结构体
                */
                class ApplyLivenessTokenRequest : public AbstractModel
                {
                public:
                    ApplyLivenessTokenRequest();
                    ~ApplyLivenessTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取枚举值，取值范围：1、2、3、4
各个含义如下
1-静默
2-眨眼
3-光线
4-眨眼+光线 （默认）
                     * @return SecureLevel 枚举值，取值范围：1、2、3、4
各个含义如下
1-静默
2-眨眼
3-光线
4-眨眼+光线 （默认）
                     */
                    std::string GetSecureLevel() const;

                    /**
                     * 设置枚举值，取值范围：1、2、3、4
各个含义如下
1-静默
2-眨眼
3-光线
4-眨眼+光线 （默认）
                     * @param SecureLevel 枚举值，取值范围：1、2、3、4
各个含义如下
1-静默
2-眨眼
3-光线
4-眨眼+光线 （默认）
                     */
                    void SetSecureLevel(const std::string& _secureLevel);

                    /**
                     * 判断参数 SecureLevel 是否已赋值
                     * @return SecureLevel 是否已赋值
                     */
                    bool SecureLevelHasBeenSet() const;

                private:

                    /**
                     * 枚举值，取值范围：1、2、3、4
各个含义如下
1-静默
2-眨眼
3-光线
4-眨眼+光线 （默认）
                     */
                    std::string m_secureLevel;
                    bool m_secureLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYLIVENESSTOKENREQUEST_H_
