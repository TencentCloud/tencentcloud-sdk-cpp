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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SWITCHELASTICMODEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SWITCHELASTICMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * SwitchElasticMode请求参数结构体
                */
                class SwitchElasticModeRequest : public AbstractModel
                {
                public:
                    SwitchElasticModeRequest();
                    ~SwitchElasticModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取版本，只能是sparta-waf, clb-waf, cdn-waf
                     * @return Edition 版本，只能是sparta-waf, clb-waf, cdn-waf
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置版本，只能是sparta-waf, clb-waf, cdn-waf
                     * @param _edition 版本，只能是sparta-waf, clb-waf, cdn-waf
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取0代表关闭，1代表打开
                     * @return Mode 0代表关闭，1代表打开
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置0代表关闭，1代表打开
                     * @param _mode 0代表关闭，1代表打开
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceID 实例id
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例id
                     * @param _instanceID 实例id
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * 版本，只能是sparta-waf, clb-waf, cdn-waf
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 0代表关闭，1代表打开
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SWITCHELASTICMODEREQUEST_H_
