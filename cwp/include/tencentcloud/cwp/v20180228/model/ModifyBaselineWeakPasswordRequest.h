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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINEWEAKPASSWORDREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINEWEAKPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineWeakPassword.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyBaselineWeakPassword请求参数结构体
                */
                class ModifyBaselineWeakPasswordRequest : public AbstractModel
                {
                public:
                    ModifyBaselineWeakPasswordRequest();
                    ~ModifyBaselineWeakPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return Data 无
                     * 
                     */
                    std::vector<BaselineWeakPassword> GetData() const;

                    /**
                     * 设置无
                     * @param _data 无
                     * 
                     */
                    void SetData(const std::vector<BaselineWeakPassword>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    std::vector<BaselineWeakPassword> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINEWEAKPASSWORDREQUEST_H_
