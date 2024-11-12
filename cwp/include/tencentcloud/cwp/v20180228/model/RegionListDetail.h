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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_REGIONLISTDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_REGIONLISTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 地域列表详情
                */
                class RegionListDetail : public AbstractModel
                {
                public:
                    RegionListDetail();
                    ~RegionListDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器类型
CVM 腾讯云云服务器
LH 腾讯云轻量服务器
ECM 腾讯云边缘计算服务器
BM 腾讯云黑石1.0 服务器
Other  其他服务器(非腾讯云)
                     * @return MachineType 机器类型
CVM 腾讯云云服务器
LH 腾讯云轻量服务器
ECM 腾讯云边缘计算服务器
BM 腾讯云黑石1.0 服务器
Other  其他服务器(非腾讯云)
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置机器类型
CVM 腾讯云云服务器
LH 腾讯云轻量服务器
ECM 腾讯云边缘计算服务器
BM 腾讯云黑石1.0 服务器
Other  其他服务器(非腾讯云)
                     * @param _machineType 机器类型
CVM 腾讯云云服务器
LH 腾讯云轻量服务器
ECM 腾讯云边缘计算服务器
BM 腾讯云黑石1.0 服务器
Other  其他服务器(非腾讯云)
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取0 腾讯云
1 IDC机房
2 阿里云
3 华为云
4 亚马逊
5 微软
6 Google
7 Oracle
8 Digital Ocean
                     * @return CloudFrom 0 腾讯云
1 IDC机房
2 阿里云
3 华为云
4 亚马逊
5 微软
6 Google
7 Oracle
8 Digital Ocean
                     * 
                     */
                    uint64_t GetCloudFrom() const;

                    /**
                     * 设置0 腾讯云
1 IDC机房
2 阿里云
3 华为云
4 亚马逊
5 微软
6 Google
7 Oracle
8 Digital Ocean
                     * @param _cloudFrom 0 腾讯云
1 IDC机房
2 阿里云
3 华为云
4 亚马逊
5 微软
6 Google
7 Oracle
8 Digital Ocean
                     * 
                     */
                    void SetCloudFrom(const uint64_t& _cloudFrom);

                    /**
                     * 判断参数 CloudFrom 是否已赋值
                     * @return CloudFrom 是否已赋值
                     * 
                     */
                    bool CloudFromHasBeenSet() const;

                    /**
                     * 获取地域列表
                     * @return RegionList 地域列表
                     * 
                     */
                    std::vector<RegionInfo> GetRegionList() const;

                    /**
                     * 设置地域列表
                     * @param _regionList 地域列表
                     * 
                     */
                    void SetRegionList(const std::vector<RegionInfo>& _regionList);

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                private:

                    /**
                     * 机器类型
CVM 腾讯云云服务器
LH 腾讯云轻量服务器
ECM 腾讯云边缘计算服务器
BM 腾讯云黑石1.0 服务器
Other  其他服务器(非腾讯云)
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 0 腾讯云
1 IDC机房
2 阿里云
3 华为云
4 亚马逊
5 微软
6 Google
7 Oracle
8 Digital Ocean
                     */
                    uint64_t m_cloudFrom;
                    bool m_cloudFromHasBeenSet;

                    /**
                     * 地域列表
                     */
                    std::vector<RegionInfo> m_regionList;
                    bool m_regionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_REGIONLISTDETAIL_H_
