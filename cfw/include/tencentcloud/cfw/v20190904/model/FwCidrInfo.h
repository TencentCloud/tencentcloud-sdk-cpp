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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_FWCIDRINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_FWCIDRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/FwVpcCidr.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 防火墙网段信息
                */
                class FwCidrInfo : public AbstractModel
                {
                public:
                    FwCidrInfo();
                    ~FwCidrInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取防火墙使用的网段类型，值VpcSelf/Assis/Custom分别代表自有网段优先/扩展网段优先/自定义
                     * @return FwCidrType 防火墙使用的网段类型，值VpcSelf/Assis/Custom分别代表自有网段优先/扩展网段优先/自定义
                     * 
                     */
                    std::string GetFwCidrType() const;

                    /**
                     * 设置防火墙使用的网段类型，值VpcSelf/Assis/Custom分别代表自有网段优先/扩展网段优先/自定义
                     * @param _fwCidrType 防火墙使用的网段类型，值VpcSelf/Assis/Custom分别代表自有网段优先/扩展网段优先/自定义
                     * 
                     */
                    void SetFwCidrType(const std::string& _fwCidrType);

                    /**
                     * 判断参数 FwCidrType 是否已赋值
                     * @return FwCidrType 是否已赋值
                     * 
                     */
                    bool FwCidrTypeHasBeenSet() const;

                    /**
                     * 获取为每个vpc指定防火墙的网段
                     * @return FwCidrLst 为每个vpc指定防火墙的网段
                     * 
                     */
                    std::vector<FwVpcCidr> GetFwCidrLst() const;

                    /**
                     * 设置为每个vpc指定防火墙的网段
                     * @param _fwCidrLst 为每个vpc指定防火墙的网段
                     * 
                     */
                    void SetFwCidrLst(const std::vector<FwVpcCidr>& _fwCidrLst);

                    /**
                     * 判断参数 FwCidrLst 是否已赋值
                     * @return FwCidrLst 是否已赋值
                     * 
                     */
                    bool FwCidrLstHasBeenSet() const;

                    /**
                     * 获取其他防火墙占用网段，一般是防火墙需要独占vpc时指定的网段
                     * @return ComFwCidr 其他防火墙占用网段，一般是防火墙需要独占vpc时指定的网段
                     * 
                     */
                    std::string GetComFwCidr() const;

                    /**
                     * 设置其他防火墙占用网段，一般是防火墙需要独占vpc时指定的网段
                     * @param _comFwCidr 其他防火墙占用网段，一般是防火墙需要独占vpc时指定的网段
                     * 
                     */
                    void SetComFwCidr(const std::string& _comFwCidr);

                    /**
                     * 判断参数 ComFwCidr 是否已赋值
                     * @return ComFwCidr 是否已赋值
                     * 
                     */
                    bool ComFwCidrHasBeenSet() const;

                private:

                    /**
                     * 防火墙使用的网段类型，值VpcSelf/Assis/Custom分别代表自有网段优先/扩展网段优先/自定义
                     */
                    std::string m_fwCidrType;
                    bool m_fwCidrTypeHasBeenSet;

                    /**
                     * 为每个vpc指定防火墙的网段
                     */
                    std::vector<FwVpcCidr> m_fwCidrLst;
                    bool m_fwCidrLstHasBeenSet;

                    /**
                     * 其他防火墙占用网段，一般是防火墙需要独占vpc时指定的网段
                     */
                    std::string m_comFwCidr;
                    bool m_comFwCidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_FWCIDRINFO_H_
