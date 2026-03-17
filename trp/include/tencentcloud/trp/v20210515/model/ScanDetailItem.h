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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_SCANDETAILITEM_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_SCANDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 扫码信息
                */
                class ScanDetailItem : public AbstractModel
                {
                public:
                    ScanDetailItem();
                    ~ScanDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户ID，也可以为手机号</p>
                     * @return Uid <p>用户ID，也可以为手机号</p>
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置<p>用户ID，也可以为手机号</p>
                     * @param _uid <p>用户ID，也可以为手机号</p>
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取<p>时间</p><p>参数格式：YYYYMMDDHHMMSS</p>
                     * @return Time <p>时间</p><p>参数格式：YYYYMMDDHHMMSS</p>
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置<p>时间</p><p>参数格式：YYYYMMDDHHMMSS</p>
                     * @param _time <p>时间</p><p>参数格式：YYYYMMDDHHMMSS</p>
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取<p>省</p>
                     * @return ProvinceName <p>省</p>
                     * 
                     */
                    std::string GetProvinceName() const;

                    /**
                     * 设置<p>省</p>
                     * @param _provinceName <p>省</p>
                     * 
                     */
                    void SetProvinceName(const std::string& _provinceName);

                    /**
                     * 判断参数 ProvinceName 是否已赋值
                     * @return ProvinceName 是否已赋值
                     * 
                     */
                    bool ProvinceNameHasBeenSet() const;

                    /**
                     * 获取<p>市</p>
                     * @return CityName <p>市</p>
                     * 
                     */
                    std::string GetCityName() const;

                    /**
                     * 设置<p>市</p>
                     * @param _cityName <p>市</p>
                     * 
                     */
                    void SetCityName(const std::string& _cityName);

                    /**
                     * 判断参数 CityName 是否已赋值
                     * @return CityName 是否已赋值
                     * 
                     */
                    bool CityNameHasBeenSet() const;

                    /**
                     * 获取<p>区</p>
                     * @return RegionName <p>区</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>区</p>
                     * @param _regionName <p>区</p>
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
                     * 获取<p>品牌</p>
                     * @return BrandName <p>品牌</p>
                     * 
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置<p>品牌</p>
                     * @param _brandName <p>品牌</p>
                     * 
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     * 
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取<p>品规</p>
                     * @return SpecName <p>品规</p>
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置<p>品规</p>
                     * @param _specName <p>品规</p>
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取<p>IP，可选，需符合IP格式</p>
                     * @return IP <p>IP，可选，需符合IP格式</p>
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置<p>IP，可选，需符合IP格式</p>
                     * @param _iP <p>IP，可选，需符合IP格式</p>
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取<p>码</p>
                     * @return Code <p>码</p>
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置<p>码</p>
                     * @param _code <p>码</p>
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * <p>用户ID，也可以为手机号</p>
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * <p>时间</p><p>参数格式：YYYYMMDDHHMMSS</p>
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>省</p>
                     */
                    std::string m_provinceName;
                    bool m_provinceNameHasBeenSet;

                    /**
                     * <p>市</p>
                     */
                    std::string m_cityName;
                    bool m_cityNameHasBeenSet;

                    /**
                     * <p>区</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>品牌</p>
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * <p>品规</p>
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>IP，可选，需符合IP格式</p>
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * <p>码</p>
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_SCANDETAILITEM_H_
