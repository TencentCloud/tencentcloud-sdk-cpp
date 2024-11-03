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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWINSTANCESHOW_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWINSTANCESHOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * VPC防火墙实例信息
                */
                class VpcFwInstanceShow : public AbstractModel
                {
                public:
                    VpcFwInstanceShow();
                    ~VpcFwInstanceShow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC防火墙实例ID
                     * @return FwInsId VPC防火墙实例ID
                     * 
                     */
                    std::string GetFwInsId() const;

                    /**
                     * 设置VPC防火墙实例ID
                     * @param _fwInsId VPC防火墙实例ID
                     * 
                     */
                    void SetFwInsId(const std::string& _fwInsId);

                    /**
                     * 判断参数 FwInsId 是否已赋值
                     * @return FwInsId 是否已赋值
                     * 
                     */
                    bool FwInsIdHasBeenSet() const;

                    /**
                     * 获取VPC防火墙实例名称
                     * @return FwInsName VPC防火墙实例名称
                     * 
                     */
                    std::string GetFwInsName() const;

                    /**
                     * 设置VPC防火墙实例名称
                     * @param _fwInsName VPC防火墙实例名称
                     * 
                     */
                    void SetFwInsName(const std::string& _fwInsName);

                    /**
                     * 判断参数 FwInsName 是否已赋值
                     * @return FwInsName 是否已赋值
                     * 
                     */
                    bool FwInsNameHasBeenSet() const;

                    /**
                     * 获取网络经过VPC防火墙CVM所在地域
                     * @return FwInsRegion 网络经过VPC防火墙CVM所在地域
                     * 
                     */
                    std::string GetFwInsRegion() const;

                    /**
                     * 设置网络经过VPC防火墙CVM所在地域
                     * @param _fwInsRegion 网络经过VPC防火墙CVM所在地域
                     * 
                     */
                    void SetFwInsRegion(const std::string& _fwInsRegion);

                    /**
                     * 判断参数 FwInsRegion 是否已赋值
                     * @return FwInsRegion 是否已赋值
                     * 
                     */
                    bool FwInsRegionHasBeenSet() const;

                private:

                    /**
                     * VPC防火墙实例ID
                     */
                    std::string m_fwInsId;
                    bool m_fwInsIdHasBeenSet;

                    /**
                     * VPC防火墙实例名称
                     */
                    std::string m_fwInsName;
                    bool m_fwInsNameHasBeenSet;

                    /**
                     * 网络经过VPC防火墙CVM所在地域
                     */
                    std::string m_fwInsRegion;
                    bool m_fwInsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWINSTANCESHOW_H_
