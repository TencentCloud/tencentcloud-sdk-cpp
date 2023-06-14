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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESERVERRELATEDDIRINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESERVERRELATEDDIRINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeServerRelatedDirInfo返回参数结构体
                */
                class DescribeServerRelatedDirInfoResponse : public AbstractModel
                {
                public:
                    DescribeServerRelatedDirInfoResponse();
                    ~DescribeServerRelatedDirInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器名称
                     * @return HostName 服务器名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取服务器IP
                     * @return HostIp 服务器IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取防护目录数量
                     * @return ProtectDirNum 防护目录数量
                     * 
                     */
                    uint64_t GetProtectDirNum() const;

                    /**
                     * 判断参数 ProtectDirNum 是否已赋值
                     * @return ProtectDirNum 是否已赋值
                     * 
                     */
                    bool ProtectDirNumHasBeenSet() const;

                    /**
                     * 获取防护文件数量
                     * @return ProtectFileNum 防护文件数量
                     * 
                     */
                    uint64_t GetProtectFileNum() const;

                    /**
                     * 判断参数 ProtectFileNum 是否已赋值
                     * @return ProtectFileNum 是否已赋值
                     * 
                     */
                    bool ProtectFileNumHasBeenSet() const;

                    /**
                     * 获取防篡改数量
                     * @return ProtectTamperNum 防篡改数量
                     * 
                     */
                    uint64_t GetProtectTamperNum() const;

                    /**
                     * 判断参数 ProtectTamperNum 是否已赋值
                     * @return ProtectTamperNum 是否已赋值
                     * 
                     */
                    bool ProtectTamperNumHasBeenSet() const;

                    /**
                     * 获取防护软链数量
                     * @return ProtectLinkNum 防护软链数量
                     * 
                     */
                    uint64_t GetProtectLinkNum() const;

                    /**
                     * 判断参数 ProtectLinkNum 是否已赋值
                     * @return ProtectLinkNum 是否已赋值
                     * 
                     */
                    bool ProtectLinkNumHasBeenSet() const;

                private:

                    /**
                     * 服务器名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 服务器IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 防护目录数量
                     */
                    uint64_t m_protectDirNum;
                    bool m_protectDirNumHasBeenSet;

                    /**
                     * 防护文件数量
                     */
                    uint64_t m_protectFileNum;
                    bool m_protectFileNumHasBeenSet;

                    /**
                     * 防篡改数量
                     */
                    uint64_t m_protectTamperNum;
                    bool m_protectTamperNumHasBeenSet;

                    /**
                     * 防护软链数量
                     */
                    uint64_t m_protectLinkNum;
                    bool m_protectLinkNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESERVERRELATEDDIRINFORESPONSE_H_
