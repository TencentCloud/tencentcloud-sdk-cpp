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

#ifndef TENCENTCLOUD_BA_V20200720_MODEL_DESCRIBEGETAUTHINFORESPONSE_H_
#define TENCENTCLOUD_BA_V20200720_MODEL_DESCRIBEGETAUTHINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ba
    {
        namespace V20200720
        {
            namespace Model
            {
                /**
                * DescribeGetAuthInfo返回参数结构体
                */
                class DescribeGetAuthInfoResponse : public AbstractModel
                {
                public:
                    DescribeGetAuthInfoResponse();
                    ~DescribeGetAuthInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实名认证状态：0未实名，1已实名
                     * @return IsTenPayMasked 实名认证状态：0未实名，1已实名
                     * 
                     */
                    std::string GetIsTenPayMasked() const;

                    /**
                     * 判断参数 IsTenPayMasked 是否已赋值
                     * @return IsTenPayMasked 是否已赋值
                     * 
                     */
                    bool IsTenPayMaskedHasBeenSet() const;

                    /**
                     * 获取实名认证类型：0个人，1企业
                     * @return IsAuthenticated 实名认证类型：0个人，1企业
                     * 
                     */
                    std::string GetIsAuthenticated() const;

                    /**
                     * 判断参数 IsAuthenticated 是否已赋值
                     * @return IsAuthenticated 是否已赋值
                     * 
                     */
                    bool IsAuthenticatedHasBeenSet() const;

                    /**
                     * 获取认证类型，个人0，企业1
                     * @return Type 认证类型，个人0，企业1
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取大客户标识：
1004、1003、1002、1001

其余为普通的用户
                     * @return Level 大客户标识：
1004、1003、1002、1001

其余为普通的用户
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * 实名认证状态：0未实名，1已实名
                     */
                    std::string m_isTenPayMasked;
                    bool m_isTenPayMaskedHasBeenSet;

                    /**
                     * 实名认证类型：0个人，1企业
                     */
                    std::string m_isAuthenticated;
                    bool m_isAuthenticatedHasBeenSet;

                    /**
                     * 认证类型，个人0，企业1
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 大客户标识：
1004、1003、1002、1001

其余为普通的用户
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BA_V20200720_MODEL_DESCRIBEGETAUTHINFORESPONSE_H_
