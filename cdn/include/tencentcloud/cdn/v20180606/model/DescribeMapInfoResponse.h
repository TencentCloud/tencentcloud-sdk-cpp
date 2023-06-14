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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEMAPINFORESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEMAPINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/MapInfo.h>
#include <tencentcloud/cdn/v20180606/model/RegionMapRelation.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeMapInfo返回参数结构体
                */
                class DescribeMapInfoResponse : public AbstractModel
                {
                public:
                    DescribeMapInfoResponse();
                    ~DescribeMapInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取映射关系数组。
                     * @return MapInfoList 映射关系数组。
                     * 
                     */
                    std::vector<MapInfo> GetMapInfoList() const;

                    /**
                     * 判断参数 MapInfoList 是否已赋值
                     * @return MapInfoList 是否已赋值
                     * 
                     */
                    bool MapInfoListHasBeenSet() const;

                    /**
                     * 获取服务端区域id和子区域id的映射关系。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerRegionRelation 服务端区域id和子区域id的映射关系。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RegionMapRelation> GetServerRegionRelation() const;

                    /**
                     * 判断参数 ServerRegionRelation 是否已赋值
                     * @return ServerRegionRelation 是否已赋值
                     * 
                     */
                    bool ServerRegionRelationHasBeenSet() const;

                    /**
                     * 获取客户端区域id和子区域id的映射关系。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientRegionRelation 客户端区域id和子区域id的映射关系。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RegionMapRelation> GetClientRegionRelation() const;

                    /**
                     * 判断参数 ClientRegionRelation 是否已赋值
                     * @return ClientRegionRelation 是否已赋值
                     * 
                     */
                    bool ClientRegionRelationHasBeenSet() const;

                private:

                    /**
                     * 映射关系数组。
                     */
                    std::vector<MapInfo> m_mapInfoList;
                    bool m_mapInfoListHasBeenSet;

                    /**
                     * 服务端区域id和子区域id的映射关系。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RegionMapRelation> m_serverRegionRelation;
                    bool m_serverRegionRelationHasBeenSet;

                    /**
                     * 客户端区域id和子区域id的映射关系。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RegionMapRelation> m_clientRegionRelation;
                    bool m_clientRegionRelationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEMAPINFORESPONSE_H_
