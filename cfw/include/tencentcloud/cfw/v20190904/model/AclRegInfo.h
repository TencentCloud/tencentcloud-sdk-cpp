/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ACLREGINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ACLREGINFO_H_

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
                * ACL 地理位置支持地域数据
                */
                class AclRegInfo : public AbstractModel
                {
                public:
                    AclRegInfo();
                    ~AclRegInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域KEY
                     * @return RegionCode 地域KEY
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地域KEY
                     * @param _regionCode 地域KEY
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取地域名称
                     * @return RegionName 地域名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称
                     * @param _regionName 地域名称
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取上级地域信息
                     * @return Parent 上级地域信息
                     * 
                     */
                    std::string GetParent() const;

                    /**
                     * 设置上级地域信息
                     * @param _parent 上级地域信息
                     * 
                     */
                    void SetParent(const std::string& _parent);

                    /**
                     * 判断参数 Parent 是否已赋值
                     * @return Parent 是否已赋值
                     * 
                     */
                    bool ParentHasBeenSet() const;

                    /**
                     * 获取中文拼音首字母
                     * @return ZhKey 中文拼音首字母
                     * 
                     */
                    std::string GetZhKey() const;

                    /**
                     * 设置中文拼音首字母
                     * @param _zhKey 中文拼音首字母
                     * 
                     */
                    void SetZhKey(const std::string& _zhKey);

                    /**
                     * 判断参数 ZhKey 是否已赋值
                     * @return ZhKey 是否已赋值
                     * 
                     */
                    bool ZhKeyHasBeenSet() const;

                    /**
                     * 获取英文首字母
                     * @return EnKey 英文首字母
                     * 
                     */
                    std::string GetEnKey() const;

                    /**
                     * 设置英文首字母
                     * @param _enKey 英文首字母
                     * 
                     */
                    void SetEnKey(const std::string& _enKey);

                    /**
                     * 判断参数 EnKey 是否已赋值
                     * @return EnKey 是否已赋值
                     * 
                     */
                    bool EnKeyHasBeenSet() const;

                    /**
                     * 获取是否为地区
                     * @return Area 是否为地区
                     * 
                     */
                    int64_t GetArea() const;

                    /**
                     * 设置是否为地区
                     * @param _area 是否为地区
                     * 
                     */
                    void SetArea(const int64_t& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取是否为省份、城市
                     * @return IsCity 是否为省份、城市
                     * 
                     */
                    int64_t GetIsCity() const;

                    /**
                     * 设置是否为省份、城市
                     * @param _isCity 是否为省份、城市
                     * 
                     */
                    void SetIsCity(const int64_t& _isCity);

                    /**
                     * 判断参数 IsCity 是否已赋值
                     * @return IsCity 是否已赋值
                     * 
                     */
                    bool IsCityHasBeenSet() const;

                    /**
                     * 获取序号
                     * @return Num 序号
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置序号
                     * @param _num 序号
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取是否支持旁路
                     * @return ForBypass 是否支持旁路
                     * 
                     */
                    int64_t GetForBypass() const;

                    /**
                     * 设置是否支持旁路
                     * @param _forBypass 是否支持旁路
                     * 
                     */
                    void SetForBypass(const int64_t& _forBypass);

                    /**
                     * 判断参数 ForBypass 是否已赋值
                     * @return ForBypass 是否已赋值
                     * 
                     */
                    bool ForBypassHasBeenSet() const;

                    /**
                     * 获取是否支持串行
                     * @return ForSerial 是否支持串行
                     * 
                     */
                    int64_t GetForSerial() const;

                    /**
                     * 设置是否支持串行
                     * @param _forSerial 是否支持串行
                     * 
                     */
                    void SetForSerial(const int64_t& _forSerial);

                    /**
                     * 判断参数 ForSerial 是否已赋值
                     * @return ForSerial 是否已赋值
                     * 
                     */
                    bool ForSerialHasBeenSet() const;

                    /**
                     * 获取是否支持NAT
                     * @return ForNat 是否支持NAT
                     * 
                     */
                    int64_t GetForNat() const;

                    /**
                     * 设置是否支持NAT
                     * @param _forNat 是否支持NAT
                     * 
                     */
                    void SetForNat(const int64_t& _forNat);

                    /**
                     * 判断参数 ForNat 是否已赋值
                     * @return ForNat 是否已赋值
                     * 
                     */
                    bool ForNatHasBeenSet() const;

                private:

                    /**
                     * 地域KEY
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 地域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 上级地域信息
                     */
                    std::string m_parent;
                    bool m_parentHasBeenSet;

                    /**
                     * 中文拼音首字母
                     */
                    std::string m_zhKey;
                    bool m_zhKeyHasBeenSet;

                    /**
                     * 英文首字母
                     */
                    std::string m_enKey;
                    bool m_enKeyHasBeenSet;

                    /**
                     * 是否为地区
                     */
                    int64_t m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 是否为省份、城市
                     */
                    int64_t m_isCity;
                    bool m_isCityHasBeenSet;

                    /**
                     * 序号
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 是否支持旁路
                     */
                    int64_t m_forBypass;
                    bool m_forBypassHasBeenSet;

                    /**
                     * 是否支持串行
                     */
                    int64_t m_forSerial;
                    bool m_forSerialHasBeenSet;

                    /**
                     * 是否支持NAT
                     */
                    int64_t m_forNat;
                    bool m_forNatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ACLREGINFO_H_
