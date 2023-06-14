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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_BGPSTATUS_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_BGPSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * bgp状态信息
                */
                class BGPStatus : public AbstractModel
                {
                public:
                    BGPStatus();
                    ~BGPStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯侧主互联IP BGP状态
                     * @return TencentAddressBgpState 腾讯侧主互联IP BGP状态
                     * 
                     */
                    std::string GetTencentAddressBgpState() const;

                    /**
                     * 设置腾讯侧主互联IP BGP状态
                     * @param _tencentAddressBgpState 腾讯侧主互联IP BGP状态
                     * 
                     */
                    void SetTencentAddressBgpState(const std::string& _tencentAddressBgpState);

                    /**
                     * 判断参数 TencentAddressBgpState 是否已赋值
                     * @return TencentAddressBgpState 是否已赋值
                     * 
                     */
                    bool TencentAddressBgpStateHasBeenSet() const;

                    /**
                     * 获取腾讯侧备互联IP BGP状态
                     * @return TencentBackupAddressBgpState 腾讯侧备互联IP BGP状态
                     * 
                     */
                    std::string GetTencentBackupAddressBgpState() const;

                    /**
                     * 设置腾讯侧备互联IP BGP状态
                     * @param _tencentBackupAddressBgpState 腾讯侧备互联IP BGP状态
                     * 
                     */
                    void SetTencentBackupAddressBgpState(const std::string& _tencentBackupAddressBgpState);

                    /**
                     * 判断参数 TencentBackupAddressBgpState 是否已赋值
                     * @return TencentBackupAddressBgpState 是否已赋值
                     * 
                     */
                    bool TencentBackupAddressBgpStateHasBeenSet() const;

                private:

                    /**
                     * 腾讯侧主互联IP BGP状态
                     */
                    std::string m_tencentAddressBgpState;
                    bool m_tencentAddressBgpStateHasBeenSet;

                    /**
                     * 腾讯侧备互联IP BGP状态
                     */
                    std::string m_tencentBackupAddressBgpState;
                    bool m_tencentBackupAddressBgpStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_BGPSTATUS_H_
