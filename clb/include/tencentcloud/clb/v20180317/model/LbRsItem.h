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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LBRSITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LBRSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 查询类型
                */
                class LbRsItem : public AbstractModel
                {
                public:
                    LbRsItem();
                    ~LbRsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc的字符串id，只支持字符串id。
可以通过 [DescribeVpcs](https://cloud.tencent.com/document/api/215/15778) 接口查询。
                     * @return VpcId vpc的字符串id，只支持字符串id。
可以通过 [DescribeVpcs](https://cloud.tencent.com/document/api/215/15778) 接口查询。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc的字符串id，只支持字符串id。
可以通过 [DescribeVpcs](https://cloud.tencent.com/document/api/215/15778) 接口查询。
                     * @param _vpcId vpc的字符串id，只支持字符串id。
可以通过 [DescribeVpcs](https://cloud.tencent.com/document/api/215/15778) 接口查询。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取需要查询后端的内网 IP，可以是 CVM 和弹性网卡。
可以通过 [DescribeAddresses](https://cloud.tencent.com/document/product/215/16702) 接口查询。
                     * @return PrivateIp 需要查询后端的内网 IP，可以是 CVM 和弹性网卡。
可以通过 [DescribeAddresses](https://cloud.tencent.com/document/product/215/16702) 接口查询。
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置需要查询后端的内网 IP，可以是 CVM 和弹性网卡。
可以通过 [DescribeAddresses](https://cloud.tencent.com/document/product/215/16702) 接口查询。
                     * @param _privateIp 需要查询后端的内网 IP，可以是 CVM 和弹性网卡。
可以通过 [DescribeAddresses](https://cloud.tencent.com/document/product/215/16702) 接口查询。
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                private:

                    /**
                     * vpc的字符串id，只支持字符串id。
可以通过 [DescribeVpcs](https://cloud.tencent.com/document/api/215/15778) 接口查询。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 需要查询后端的内网 IP，可以是 CVM 和弹性网卡。
可以通过 [DescribeAddresses](https://cloud.tencent.com/document/product/215/16702) 接口查询。
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LBRSITEM_H_
