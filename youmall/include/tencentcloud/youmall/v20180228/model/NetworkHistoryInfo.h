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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_NETWORKHISTORYINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_NETWORKHISTORYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/NetworkInfo.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 查询网络状态历史数据输出
                */
                class NetworkHistoryInfo : public AbstractModel
                {
                public:
                    NetworkHistoryInfo();
                    ~NetworkHistoryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
                     * @return Count 总数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置总数
                     * @param _count 总数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取集团id
                     * @return CompanyId 集团id
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置集团id
                     * @param _companyId 集团id
                     * 
                     */
                    void SetCompanyId(const std::string& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取店铺id
                     * @return ShopId 店铺id
                     * 
                     */
                    int64_t GetShopId() const;

                    /**
                     * 设置店铺id
                     * @param _shopId 店铺id
                     * 
                     */
                    void SetShopId(const int64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取店铺省份
                     * @return Province 店铺省份
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置店铺省份
                     * @param _province 店铺省份
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取店铺城市
                     * @return City 店铺城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置店铺城市
                     * @param _city 店铺城市
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
                     * 获取店铺名称
                     * @return ShopName 店铺名称
                     * 
                     */
                    std::string GetShopName() const;

                    /**
                     * 设置店铺名称
                     * @param _shopName 店铺名称
                     * 
                     */
                    void SetShopName(const std::string& _shopName);

                    /**
                     * 判断参数 ShopName 是否已赋值
                     * @return ShopName 是否已赋值
                     * 
                     */
                    bool ShopNameHasBeenSet() const;

                    /**
                     * 获取网络信息
                     * @return Infos 网络信息
                     * 
                     */
                    std::vector<NetworkInfo> GetInfos() const;

                    /**
                     * 设置网络信息
                     * @param _infos 网络信息
                     * 
                     */
                    void SetInfos(const std::vector<NetworkInfo>& _infos);

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 集团id
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 店铺id
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 店铺省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 店铺城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 店铺名称
                     */
                    std::string m_shopName;
                    bool m_shopNameHasBeenSet;

                    /**
                     * 网络信息
                     */
                    std::vector<NetworkInfo> m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_NETWORKHISTORYINFO_H_
