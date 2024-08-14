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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CREATESERVERLESSSPACEV2REQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CREATESERVERLESSSPACEV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/VpcInfo.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateServerlessSpaceV2请求参数结构体
                */
                class CreateServerlessSpaceV2Request : public AbstractModel
                {
                public:
                    CreateServerlessSpaceV2Request();
                    ~CreateServerlessSpaceV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取vpc信息
                     * @return VpcInfo vpc信息
                     * 
                     */
                    std::vector<VpcInfo> GetVpcInfo() const;

                    /**
                     * 设置vpc信息
                     * @param _vpcInfo vpc信息
                     * 
                     */
                    void SetVpcInfo(const std::vector<VpcInfo>& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                    /**
                     * 获取索引空间名
                     * @return SpaceName 索引空间名
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置索引空间名
                     * @param _spaceName 索引空间名
                     * 
                     */
                    void SetSpaceName(const std::string& _spaceName);

                    /**
                     * 判断参数 SpaceName 是否已赋值
                     * @return SpaceName 是否已赋值
                     * 
                     */
                    bool SpaceNameHasBeenSet() const;

                    /**
                     * 获取空间名称
                     * @return Zone 空间名称
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置空间名称
                     * @param _zone 空间名称
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取白名单列表
                     * @return KibanaWhiteIpList 白名单列表
                     * 
                     */
                    std::vector<std::string> GetKibanaWhiteIpList() const;

                    /**
                     * 设置白名单列表
                     * @param _kibanaWhiteIpList 白名单列表
                     * 
                     */
                    void SetKibanaWhiteIpList(const std::vector<std::string>& _kibanaWhiteIpList);

                    /**
                     * 判断参数 KibanaWhiteIpList 是否已赋值
                     * @return KibanaWhiteIpList 是否已赋值
                     * 
                     */
                    bool KibanaWhiteIpListHasBeenSet() const;

                    /**
                     * 获取空间id
                     * @return ZoneId 空间id
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置空间id
                     * @param _zoneId 空间id
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return TagList 标签信息
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置标签信息
                     * @param _tagList 标签信息
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * vpc信息
                     */
                    std::vector<VpcInfo> m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                    /**
                     * 索引空间名
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                    /**
                     * 空间名称
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 白名单列表
                     */
                    std::vector<std::string> m_kibanaWhiteIpList;
                    bool m_kibanaWhiteIpListHasBeenSet;

                    /**
                     * 空间id
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CREATESERVERLESSSPACEV2REQUEST_H_
