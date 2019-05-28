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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PULLSTREAMCONFIG_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PULLSTREAMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 拉流配置
                */
                class PullStreamConfig : public AbstractModel
                {
                public:
                    PullStreamConfig();
                    ~PullStreamConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拉流配置Id。
                     * @return ConfigId 拉流配置Id。
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置拉流配置Id。
                     * @param ConfigId 拉流配置Id。
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取源Url。
                     * @return FromUrl 源Url。
                     */
                    std::string GetFromUrl() const;

                    /**
                     * 设置源Url。
                     * @param FromUrl 源Url。
                     */
                    void SetFromUrl(const std::string& _fromUrl);

                    /**
                     * 判断参数 FromUrl 是否已赋值
                     * @return FromUrl 是否已赋值
                     */
                    bool FromUrlHasBeenSet() const;

                    /**
                     * 获取目的Url。
                     * @return ToUrl 目的Url。
                     */
                    std::string GetToUrl() const;

                    /**
                     * 设置目的Url。
                     * @param ToUrl 目的Url。
                     */
                    void SetToUrl(const std::string& _toUrl);

                    /**
                     * 判断参数 ToUrl 是否已赋值
                     * @return ToUrl 是否已赋值
                     */
                    bool ToUrlHasBeenSet() const;

                    /**
                     * 获取区域名。
                     * @return AreaName 区域名。
                     */
                    std::string GetAreaName() const;

                    /**
                     * 设置区域名。
                     * @param AreaName 区域名。
                     */
                    void SetAreaName(const std::string& _areaName);

                    /**
                     * 判断参数 AreaName 是否已赋值
                     * @return AreaName 是否已赋值
                     */
                    bool AreaNameHasBeenSet() const;

                    /**
                     * 获取运营商名。
                     * @return IspName 运营商名。
                     */
                    std::string GetIspName() const;

                    /**
                     * 设置运营商名。
                     * @param IspName 运营商名。
                     */
                    void SetIspName(const std::string& _ispName);

                    /**
                     * 判断参数 IspName 是否已赋值
                     * @return IspName 是否已赋值
                     */
                    bool IspNameHasBeenSet() const;

                    /**
                     * 获取开始时间。
UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     * @return StartTime 开始时间。
UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     * @param StartTime 开始时间。
UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间。

UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     * @return EndTime 结束时间。

UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。

UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     * @param EndTime 结束时间。

UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取0无效，1初始状态，2正在运行，3拉起失败，4暂停。
                     * @return Status 0无效，1初始状态，2正在运行，3拉起失败，4暂停。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置0无效，1初始状态，2正在运行，3拉起失败，4暂停。
                     * @param Status 0无效，1初始状态，2正在运行，3拉起失败，4暂停。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 拉流配置Id。
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 源Url。
                     */
                    std::string m_fromUrl;
                    bool m_fromUrlHasBeenSet;

                    /**
                     * 目的Url。
                     */
                    std::string m_toUrl;
                    bool m_toUrlHasBeenSet;

                    /**
                     * 区域名。
                     */
                    std::string m_areaName;
                    bool m_areaNameHasBeenSet;

                    /**
                     * 运营商名。
                     */
                    std::string m_ispName;
                    bool m_ispNameHasBeenSet;

                    /**
                     * 开始时间。
UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。

UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 0无效，1初始状态，2正在运行，3拉起失败，4暂停。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PULLSTREAMCONFIG_H_
