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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/SaleInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * zone信息实体
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>可用区</p>
                     * @return ZoneId <p>可用区</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zoneId <p>可用区</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>是否内部APP</p><p>枚举值：</p><ul><li>0： 外部</li><li>1： 内部</li></ul><p>默认值：0</p>
                     * @return IsInternalApp <p>是否内部APP</p><p>枚举值：</p><ul><li>0： 外部</li><li>1： 内部</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetIsInternalApp() const;

                    /**
                     * 设置<p>是否内部APP</p><p>枚举值：</p><ul><li>0： 外部</li><li>1： 内部</li></ul><p>默认值：0</p>
                     * @param _isInternalApp <p>是否内部APP</p><p>枚举值：</p><ul><li>0： 外部</li><li>1： 内部</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetIsInternalApp(const int64_t& _isInternalApp);

                    /**
                     * 判断参数 IsInternalApp 是否已赋值
                     * @return IsInternalApp 是否已赋值
                     * 
                     */
                    bool IsInternalAppHasBeenSet() const;

                    /**
                     * 获取<p>应用标识</p>
                     * @return AppId <p>应用标识</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>应用标识</p>
                     * @param _appId <p>应用标识</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>可用区是否售罄标识，true表示已售罄，false表示未售罄。</p>
                     * @return Flag <p>可用区是否售罄标识，true表示已售罄，false表示未售罄。</p>
                     * 
                     */
                    bool GetFlag() const;

                    /**
                     * 设置<p>可用区是否售罄标识，true表示已售罄，false表示未售罄。</p>
                     * @param _flag <p>可用区是否售罄标识，true表示已售罄，false表示未售罄。</p>
                     * 
                     */
                    void SetFlag(const bool& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取<p>可用区名称</p>
                     * @return ZoneName <p>可用区名称</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>可用区名称</p>
                     * @param _zoneName <p>可用区名称</p>
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取<p>可用区状态</p><p>枚举值：</p><ul><li>3： 开启</li><li>4： 关闭</li></ul><p>可用区状态以SoldOut为准</p>
                     * @return ZoneStatus <p>可用区状态</p><p>枚举值：</p><ul><li>3： 开启</li><li>4： 关闭</li></ul><p>可用区状态以SoldOut为准</p>
                     * 
                     */
                    int64_t GetZoneStatus() const;

                    /**
                     * 设置<p>可用区状态</p><p>枚举值：</p><ul><li>3： 开启</li><li>4： 关闭</li></ul><p>可用区状态以SoldOut为准</p>
                     * @param _zoneStatus <p>可用区状态</p><p>枚举值：</p><ul><li>3： 开启</li><li>4： 关闭</li></ul><p>可用区状态以SoldOut为准</p>
                     * 
                     */
                    void SetZoneStatus(const int64_t& _zoneStatus);

                    /**
                     * 判断参数 ZoneStatus 是否已赋值
                     * @return ZoneStatus 是否已赋值
                     * 
                     */
                    bool ZoneStatusHasBeenSet() const;

                    /**
                     * 获取<p>额外标识</p>
                     * @return Exflag <p>额外标识</p>
                     * @deprecated
                     */
                    std::string GetExflag() const;

                    /**
                     * 设置<p>额外标识</p>
                     * @param _exflag <p>额外标识</p>
                     * @deprecated
                     */
                    void SetExflag(const std::string& _exflag);

                    /**
                     * 判断参数 Exflag 是否已赋值
                     * @return Exflag 是否已赋值
                     * @deprecated
                     */
                    bool ExflagHasBeenSet() const;

                    /**
                     * 获取<p>true为售罄，false为未售罄</p>
                     * @return SoldOut <p>true为售罄，false为未售罄</p>
                     * 
                     */
                    std::string GetSoldOut() const;

                    /**
                     * 设置<p>true为售罄，false为未售罄</p>
                     * @param _soldOut <p>true为售罄，false为未售罄</p>
                     * 
                     */
                    void SetSoldOut(const std::string& _soldOut);

                    /**
                     * 判断参数 SoldOut 是否已赋值
                     * @return SoldOut 是否已赋值
                     * 
                     */
                    bool SoldOutHasBeenSet() const;

                    /**
                     * 获取<p>标准版售罄信息</p>
                     * @return SalesInfo <p>标准版售罄信息</p>
                     * 
                     */
                    std::vector<SaleInfo> GetSalesInfo() const;

                    /**
                     * 设置<p>标准版售罄信息</p>
                     * @param _salesInfo <p>标准版售罄信息</p>
                     * 
                     */
                    void SetSalesInfo(const std::vector<SaleInfo>& _salesInfo);

                    /**
                     * 判断参数 SalesInfo 是否已赋值
                     * @return SalesInfo 是否已赋值
                     * 
                     */
                    bool SalesInfoHasBeenSet() const;

                    /**
                     * 获取<p>额外标识</p>
                     * @return ExtraFlag <p>额外标识</p>
                     * 
                     */
                    std::string GetExtraFlag() const;

                    /**
                     * 设置<p>额外标识</p>
                     * @param _extraFlag <p>额外标识</p>
                     * 
                     */
                    void SetExtraFlag(const std::string& _extraFlag);

                    /**
                     * 判断参数 ExtraFlag 是否已赋值
                     * @return ExtraFlag 是否已赋值
                     * 
                     */
                    bool ExtraFlagHasBeenSet() const;

                private:

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>是否内部APP</p><p>枚举值：</p><ul><li>0： 外部</li><li>1： 内部</li></ul><p>默认值：0</p>
                     */
                    int64_t m_isInternalApp;
                    bool m_isInternalAppHasBeenSet;

                    /**
                     * <p>应用标识</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>可用区是否售罄标识，true表示已售罄，false表示未售罄。</p>
                     */
                    bool m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * <p>可用区名称</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>可用区状态</p><p>枚举值：</p><ul><li>3： 开启</li><li>4： 关闭</li></ul><p>可用区状态以SoldOut为准</p>
                     */
                    int64_t m_zoneStatus;
                    bool m_zoneStatusHasBeenSet;

                    /**
                     * <p>额外标识</p>
                     */
                    std::string m_exflag;
                    bool m_exflagHasBeenSet;

                    /**
                     * <p>true为售罄，false为未售罄</p>
                     */
                    std::string m_soldOut;
                    bool m_soldOutHasBeenSet;

                    /**
                     * <p>标准版售罄信息</p>
                     */
                    std::vector<SaleInfo> m_salesInfo;
                    bool m_salesInfoHasBeenSet;

                    /**
                     * <p>额外标识</p>
                     */
                    std::string m_extraFlag;
                    bool m_extraFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONEINFO_H_
