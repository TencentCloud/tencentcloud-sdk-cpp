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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                     * 获取zone的id
                     * @return ZoneId zone的id
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置zone的id
                     * @param ZoneId zone的id
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取是否内部APP
                     * @return IsInternalApp 是否内部APP
                     */
                    int64_t GetIsInternalApp() const;

                    /**
                     * 设置是否内部APP
                     * @param IsInternalApp 是否内部APP
                     */
                    void SetIsInternalApp(const int64_t& _isInternalApp);

                    /**
                     * 判断参数 IsInternalApp 是否已赋值
                     * @return IsInternalApp 是否已赋值
                     */
                    bool IsInternalAppHasBeenSet() const;

                    /**
                     * 获取app id
                     * @return AppId app id
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置app id
                     * @param AppId app id
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取标识
                     * @return Flag 标识
                     */
                    bool GetFlag() const;

                    /**
                     * 设置标识
                     * @param Flag 标识
                     */
                    void SetFlag(const bool& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取zone名称
                     * @return ZoneName zone名称
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置zone名称
                     * @param ZoneName zone名称
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取zone状态
                     * @return ZoneStatus zone状态
                     */
                    int64_t GetZoneStatus() const;

                    /**
                     * 设置zone状态
                     * @param ZoneStatus zone状态
                     */
                    void SetZoneStatus(const int64_t& _zoneStatus);

                    /**
                     * 判断参数 ZoneStatus 是否已赋值
                     * @return ZoneStatus 是否已赋值
                     */
                    bool ZoneStatusHasBeenSet() const;

                    /**
                     * 获取额外标识
                     * @return Exflag 额外标识
                     */
                    std::string GetExflag() const;

                    /**
                     * 设置额外标识
                     * @param Exflag 额外标识
                     */
                    void SetExflag(const std::string& _exflag);

                    /**
                     * 判断参数 Exflag 是否已赋值
                     * @return Exflag 是否已赋值
                     */
                    bool ExflagHasBeenSet() const;

                    /**
                     * 获取json对象，key为机型，value true为售罄，false为未售罄
                     * @return SoldOut json对象，key为机型，value true为售罄，false为未售罄
                     */
                    std::string GetSoldOut() const;

                    /**
                     * 设置json对象，key为机型，value true为售罄，false为未售罄
                     * @param SoldOut json对象，key为机型，value true为售罄，false为未售罄
                     */
                    void SetSoldOut(const std::string& _soldOut);

                    /**
                     * 判断参数 SoldOut 是否已赋值
                     * @return SoldOut 是否已赋值
                     */
                    bool SoldOutHasBeenSet() const;

                private:

                    /**
                     * zone的id
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 是否内部APP
                     */
                    int64_t m_isInternalApp;
                    bool m_isInternalAppHasBeenSet;

                    /**
                     * app id
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 标识
                     */
                    bool m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * zone名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * zone状态
                     */
                    int64_t m_zoneStatus;
                    bool m_zoneStatusHasBeenSet;

                    /**
                     * 额外标识
                     */
                    std::string m_exflag;
                    bool m_exflagHasBeenSet;

                    /**
                     * json对象，key为机型，value true为售罄，false为未售罄
                     */
                    std::string m_soldOut;
                    bool m_soldOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONEINFO_H_
