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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_NODEDEFINEEXT_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_NODEDEFINEEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 探测节点
                */
                class NodeDefineExt : public AbstractModel
                {
                public:
                    NodeDefineExt();
                    ~NodeDefineExt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点名称
                     * @return Name 节点名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点名称
                     * @param _name 节点名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取节点代码
                     * @return Code 节点代码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置节点代码
                     * @param _code 节点代码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取节点类型
<li> 1 = IDC </li>
<li> 2 = LastMile </li>
<li> 3 = Mobile </li>
                     * @return Type 节点类型
<li> 1 = IDC </li>
<li> 2 = LastMile </li>
<li> 3 = Mobile </li>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置节点类型
<li> 1 = IDC </li>
<li> 2 = LastMile </li>
<li> 3 = Mobile </li>
                     * @param _type 节点类型
<li> 1 = IDC </li>
<li> 2 = LastMile </li>
<li> 3 = Mobile </li>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取网络服务商
                     * @return NetService 网络服务商
                     * 
                     */
                    std::string GetNetService() const;

                    /**
                     * 设置网络服务商
                     * @param _netService 网络服务商
                     * 
                     */
                    void SetNetService(const std::string& _netService);

                    /**
                     * 判断参数 NetService 是否已赋值
                     * @return NetService 是否已赋值
                     * 
                     */
                    bool NetServiceHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return District 区域
                     * 
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置区域
                     * @param _district 区域
                     * 
                     */
                    void SetDistrict(const std::string& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取城市
                     * @return City 城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市
                     * @param _city 城市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取IP 类型
<li> 1 = IPv4 </li>
<li> 2 = IPv6 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPType IP 类型
<li> 1 = IPv4 </li>
<li> 2 = IPv6 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIPType() const;

                    /**
                     * 设置IP 类型
<li> 1 = IPv4 </li>
<li> 2 = IPv6 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iPType IP 类型
<li> 1 = IPv4 </li>
<li> 2 = IPv6 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIPType(const int64_t& _iPType);

                    /**
                     * 判断参数 IPType 是否已赋值
                     * @return IPType 是否已赋值
                     * 
                     */
                    bool IPTypeHasBeenSet() const;

                    /**
                     * 获取区域
<li> 1 = 中国大陆 </li>
<li> 2 = 港澳台 </li>
<li> 3 = 境外 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 区域
<li> 1 = 中国大陆 </li>
<li> 2 = 港澳台 </li>
<li> 3 = 境外 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLocation() const;

                    /**
                     * 设置区域
<li> 1 = 中国大陆 </li>
<li> 2 = 港澳台 </li>
<li> 3 = 境外 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 区域
<li> 1 = 中国大陆 </li>
<li> 2 = 港澳台 </li>
<li> 3 = 境外 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocation(const int64_t& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取节点类型  如果为base 则为可用性拨测点，为空则为高级拨测点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeType 节点类型  如果为base 则为可用性拨测点，为空则为高级拨测点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeType() const;

                    /**
                     * 设置节点类型  如果为base 则为可用性拨测点，为空则为高级拨测点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeType 节点类型  如果为base 则为可用性拨测点，为空则为高级拨测点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeType(const std::string& _codeType);

                    /**
                     * 判断参数 CodeType 是否已赋值
                     * @return CodeType 是否已赋值
                     * 
                     */
                    bool CodeTypeHasBeenSet() const;

                    /**
                     * 获取节点支持的任务类型。1: 页面性能 2: 文件上传 3: 文件下载 4: 端口性能 5: 网络质量 6: 音视频体验
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypes 节点支持的任务类型。1: 页面性能 2: 文件上传 3: 文件下载 4: 端口性能 5: 网络质量 6: 音视频体验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetTaskTypes() const;

                    /**
                     * 设置节点支持的任务类型。1: 页面性能 2: 文件上传 3: 文件下载 4: 端口性能 5: 网络质量 6: 音视频体验
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypes 节点支持的任务类型。1: 页面性能 2: 文件上传 3: 文件下载 4: 端口性能 5: 网络质量 6: 音视频体验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypes(const std::vector<int64_t>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                private:

                    /**
                     * 节点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 节点代码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 节点类型
<li> 1 = IDC </li>
<li> 2 = LastMile </li>
<li> 3 = Mobile </li>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 网络服务商
                     */
                    std::string m_netService;
                    bool m_netServiceHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * 城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * IP 类型
<li> 1 = IPv4 </li>
<li> 2 = IPv6 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iPType;
                    bool m_iPTypeHasBeenSet;

                    /**
                     * 区域
<li> 1 = 中国大陆 </li>
<li> 2 = 港澳台 </li>
<li> 3 = 境外 </li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 节点类型  如果为base 则为可用性拨测点，为空则为高级拨测点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeType;
                    bool m_codeTypeHasBeenSet;

                    /**
                     * 节点支持的任务类型。1: 页面性能 2: 文件上传 3: 文件下载 4: 端口性能 5: 网络质量 6: 音视频体验
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_NODEDEFINEEXT_H_
