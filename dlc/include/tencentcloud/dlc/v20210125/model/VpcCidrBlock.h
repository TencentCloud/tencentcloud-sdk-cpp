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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_VPCCIDRBLOCK_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_VPCCIDRBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * VPC子网信息
                */
                class VpcCidrBlock : public AbstractModel
                {
                public:
                    VpcCidrBlock();
                    ~VpcCidrBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子网Id
                     * @return CidrId 子网Id
                     * 
                     */
                    std::string GetCidrId() const;

                    /**
                     * 设置子网Id
                     * @param _cidrId 子网Id
                     * 
                     */
                    void SetCidrId(const std::string& _cidrId);

                    /**
                     * 判断参数 CidrId 是否已赋值
                     * @return CidrId 是否已赋值
                     * 
                     */
                    bool CidrIdHasBeenSet() const;

                    /**
                     * 获取子网网段
                     * @return CidrAddr 子网网段
                     * 
                     */
                    std::string GetCidrAddr() const;

                    /**
                     * 设置子网网段
                     * @param _cidrAddr 子网网段
                     * 
                     */
                    void SetCidrAddr(const std::string& _cidrAddr);

                    /**
                     * 判断参数 CidrAddr 是否已赋值
                     * @return CidrAddr 是否已赋值
                     * 
                     */
                    bool CidrAddrHasBeenSet() const;

                private:

                    /**
                     * 子网Id
                     */
                    std::string m_cidrId;
                    bool m_cidrIdHasBeenSet;

                    /**
                     * 子网网段
                     */
                    std::string m_cidrAddr;
                    bool m_cidrAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_VPCCIDRBLOCK_H_
