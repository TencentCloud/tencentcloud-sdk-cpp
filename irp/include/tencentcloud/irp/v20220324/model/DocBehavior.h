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

#ifndef TENCENTCLOUD_IRP_V20220324_MODEL_DOCBEHAVIOR_H_
#define TENCENTCLOUD_IRP_V20220324_MODEL_DOCBEHAVIOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220324/model/UserIdInfo.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220324
        {
            namespace Model
            {
                /**
                * 行为数据
                */
                class DocBehavior : public AbstractModel
                {
                public:
                    DocBehavior();
                    ~DocBehavior() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容唯一ID，如 2824324234
                     * @return ItemId 内容唯一ID，如 2824324234
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置内容唯一ID，如 2824324234
                     * @param _itemId 内容唯一ID，如 2824324234
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取行为类型
                     * @return BehaviorType 行为类型
                     * 
                     */
                    int64_t GetBehaviorType() const;

                    /**
                     * 设置行为类型
                     * @param _behaviorType 行为类型
                     * 
                     */
                    void SetBehaviorType(const int64_t& _behaviorType);

                    /**
                     * 判断参数 BehaviorType 是否已赋值
                     * @return BehaviorType 是否已赋值
                     * 
                     */
                    bool BehaviorTypeHasBeenSet() const;

                    /**
                     * 获取行为值
                     * @return BehaviorValue 行为值
                     * 
                     */
                    std::string GetBehaviorValue() const;

                    /**
                     * 设置行为值
                     * @param _behaviorValue 行为值
                     * 
                     */
                    void SetBehaviorValue(const std::string& _behaviorValue);

                    /**
                     * 判断参数 BehaviorValue 是否已赋值
                     * @return BehaviorValue 是否已赋值
                     * 
                     */
                    bool BehaviorValueHasBeenSet() const;

                    /**
                     * 获取行为时间戳： 秒级时间戳（默认为当前时间）,不能延迟太久，尽量实时上报，否则会影响推荐结果的准确性。
                     * @return BehaviorTimestamp 行为时间戳： 秒级时间戳（默认为当前时间）,不能延迟太久，尽量实时上报，否则会影响推荐结果的准确性。
                     * 
                     */
                    int64_t GetBehaviorTimestamp() const;

                    /**
                     * 设置行为时间戳： 秒级时间戳（默认为当前时间）,不能延迟太久，尽量实时上报，否则会影响推荐结果的准确性。
                     * @param _behaviorTimestamp 行为时间戳： 秒级时间戳（默认为当前时间）,不能延迟太久，尽量实时上报，否则会影响推荐结果的准确性。
                     * 
                     */
                    void SetBehaviorTimestamp(const int64_t& _behaviorTimestamp);

                    /**
                     * 判断参数 BehaviorTimestamp 是否已赋值
                     * @return BehaviorTimestamp 是否已赋值
                     * 
                     */
                    bool BehaviorTimestampHasBeenSet() const;

                    /**
                     * 获取场景id，在控制台创建场景后获取。
                     * @return SceneId 场景id，在控制台创建场景后获取。
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置场景id，在控制台创建场景后获取。
                     * @param _sceneId 场景id，在控制台创建场景后获取。
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取用户id列表
                     * @return UserIdList 用户id列表
                     * 
                     */
                    std::vector<UserIdInfo> GetUserIdList() const;

                    /**
                     * 设置用户id列表
                     * @param _userIdList 用户id列表
                     * 
                     */
                    void SetUserIdList(const std::vector<UserIdInfo>& _userIdList);

                    /**
                     * 判断参数 UserIdList 是否已赋值
                     * @return UserIdList 是否已赋值
                     * 
                     */
                    bool UserIdListHasBeenSet() const;

                    /**
                     * 获取会话id，使用获取推荐结果中返回的RecTraceId填入。<br>注意：如果和在线推荐请求中的traceId不同，会影响行为特征归因，影响推荐算法效果
                     * @return RecTraceId 会话id，使用获取推荐结果中返回的RecTraceId填入。<br>注意：如果和在线推荐请求中的traceId不同，会影响行为特征归因，影响推荐算法效果
                     * 
                     */
                    std::string GetRecTraceId() const;

                    /**
                     * 设置会话id，使用获取推荐结果中返回的RecTraceId填入。<br>注意：如果和在线推荐请求中的traceId不同，会影响行为特征归因，影响推荐算法效果
                     * @param _recTraceId 会话id，使用获取推荐结果中返回的RecTraceId填入。<br>注意：如果和在线推荐请求中的traceId不同，会影响行为特征归因，影响推荐算法效果
                     * 
                     */
                    void SetRecTraceId(const std::string& _recTraceId);

                    /**
                     * 判断参数 RecTraceId 是否已赋值
                     * @return RecTraceId 是否已赋值
                     * 
                     */
                    bool RecTraceIdHasBeenSet() const;

                    /**
                     * 获取算法来源：用来区分行为来源于哪个算法。值为**business，tencent，other** 三者之一<br>● business 表示业务自己的算法对照组<br>● tencent 为腾讯算法<br>● other 为其他算法
                     * @return Source 算法来源：用来区分行为来源于哪个算法。值为**business，tencent，other** 三者之一<br>● business 表示业务自己的算法对照组<br>● tencent 为腾讯算法<br>● other 为其他算法
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置算法来源：用来区分行为来源于哪个算法。值为**business，tencent，other** 三者之一<br>● business 表示业务自己的算法对照组<br>● tencent 为腾讯算法<br>● other 为其他算法
                     * @param _source 算法来源：用来区分行为来源于哪个算法。值为**business，tencent，other** 三者之一<br>● business 表示业务自己的算法对照组<br>● tencent 为腾讯算法<br>● other 为其他算法
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取物料类型
                     * @return ItemType 物料类型
                     * 
                     */
                    int64_t GetItemType() const;

                    /**
                     * 设置物料类型
                     * @param _itemType 物料类型
                     * 
                     */
                    void SetItemType(const int64_t& _itemType);

                    /**
                     * 判断参数 ItemType 是否已赋值
                     * @return ItemType 是否已赋值
                     * 
                     */
                    bool ItemTypeHasBeenSet() const;

                    /**
                     * 获取微信开放平台上查看appId
                     * @return AppId 微信开放平台上查看appId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置微信开放平台上查看appId
                     * @param _appId 微信开放平台上查看appId
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取回传video_over事件的时候，回传的用户播放视频的总时长（真正播放的，拖动不算，单位为秒）
                     * @return VideoPlayDuration 回传video_over事件的时候，回传的用户播放视频的总时长（真正播放的，拖动不算，单位为秒）
                     * 
                     */
                    int64_t GetVideoPlayDuration() const;

                    /**
                     * 设置回传video_over事件的时候，回传的用户播放视频的总时长（真正播放的，拖动不算，单位为秒）
                     * @param _videoPlayDuration 回传video_over事件的时候，回传的用户播放视频的总时长（真正播放的，拖动不算，单位为秒）
                     * 
                     */
                    void SetVideoPlayDuration(const int64_t& _videoPlayDuration);

                    /**
                     * 判断参数 VideoPlayDuration 是否已赋值
                     * @return VideoPlayDuration 是否已赋值
                     * 
                     */
                    bool VideoPlayDurationHasBeenSet() const;

                    /**
                     * 获取来源物料内容：用来标识在指定内容页面产生的行为，如需要统计用户在A内容详情页里，对推荐内容B点击等行为，则ReferrerItemId代表内容A，ItemId代表内容B
                     * @return ReferrerItemId 来源物料内容：用来标识在指定内容页面产生的行为，如需要统计用户在A内容详情页里，对推荐内容B点击等行为，则ReferrerItemId代表内容A，ItemId代表内容B
                     * 
                     */
                    std::string GetReferrerItemId() const;

                    /**
                     * 设置来源物料内容：用来标识在指定内容页面产生的行为，如需要统计用户在A内容详情页里，对推荐内容B点击等行为，则ReferrerItemId代表内容A，ItemId代表内容B
                     * @param _referrerItemId 来源物料内容：用来标识在指定内容页面产生的行为，如需要统计用户在A内容详情页里，对推荐内容B点击等行为，则ReferrerItemId代表内容A，ItemId代表内容B
                     * 
                     */
                    void SetReferrerItemId(const std::string& _referrerItemId);

                    /**
                     * 判断参数 ReferrerItemId 是否已赋值
                     * @return ReferrerItemId 是否已赋值
                     * 
                     */
                    bool ReferrerItemIdHasBeenSet() const;

                    /**
                     * 获取国家，统一用简写，比如中国则填写CN
                     * @return Country 国家，统一用简写，比如中国则填写CN
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家，统一用简写，比如中国则填写CN
                     * @param _country 国家，统一用简写，比如中国则填写CN
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取省
                     * @return Province 省
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省
                     * @param _province 省
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
                     * 获取区县
                     * @return District 区县
                     * 
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置区县
                     * @param _district 区县
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
                     * 获取客户端ip
                     * @return IP 客户端ip
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置客户端ip
                     * @param _iP 客户端ip
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
                     * 获取客户端网络类型
                     * @return Network 客户端网络类型
                     * 
                     */
                    std::string GetNetwork() const;

                    /**
                     * 设置客户端网络类型
                     * @param _network 客户端网络类型
                     * 
                     */
                    void SetNetwork(const std::string& _network);

                    /**
                     * 判断参数 Network 是否已赋值
                     * @return Network 是否已赋值
                     * 
                     */
                    bool NetworkHasBeenSet() const;

                    /**
                     * 获取客户端平台，ios/android/h5
                     * @return Platform 客户端平台，ios/android/h5
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置客户端平台，ios/android/h5
                     * @param _platform 客户端平台，ios/android/h5
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取客户端app版本
                     * @return AppVersion 客户端app版本
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置客户端app版本
                     * @param _appVersion 客户端app版本
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取操作系统版本
                     * @return OsVersion 操作系统版本
                     * 
                     */
                    std::string GetOsVersion() const;

                    /**
                     * 设置操作系统版本
                     * @param _osVersion 操作系统版本
                     * 
                     */
                    void SetOsVersion(const std::string& _osVersion);

                    /**
                     * 判断参数 OsVersion 是否已赋值
                     * @return OsVersion 是否已赋值
                     * 
                     */
                    bool OsVersionHasBeenSet() const;

                    /**
                     * 获取机型
                     * @return DeviceModel 机型
                     * 
                     */
                    std::string GetDeviceModel() const;

                    /**
                     * 设置机型
                     * @param _deviceModel 机型
                     * 
                     */
                    void SetDeviceModel(const std::string& _deviceModel);

                    /**
                     * 判断参数 DeviceModel 是否已赋值
                     * @return DeviceModel 是否已赋值
                     * 
                     */
                    bool DeviceModelHasBeenSet() const;

                    /**
                     * 获取json字符串，用于行为数据的扩展
                     * @return Extension json字符串，用于行为数据的扩展
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置json字符串，用于行为数据的扩展
                     * @param _extension json字符串，用于行为数据的扩展
                     * 
                     */
                    void SetExtension(const std::string& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                private:

                    /**
                     * 内容唯一ID，如 2824324234
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 行为类型
                     */
                    int64_t m_behaviorType;
                    bool m_behaviorTypeHasBeenSet;

                    /**
                     * 行为值
                     */
                    std::string m_behaviorValue;
                    bool m_behaviorValueHasBeenSet;

                    /**
                     * 行为时间戳： 秒级时间戳（默认为当前时间）,不能延迟太久，尽量实时上报，否则会影响推荐结果的准确性。
                     */
                    int64_t m_behaviorTimestamp;
                    bool m_behaviorTimestampHasBeenSet;

                    /**
                     * 场景id，在控制台创建场景后获取。
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 用户id列表
                     */
                    std::vector<UserIdInfo> m_userIdList;
                    bool m_userIdListHasBeenSet;

                    /**
                     * 会话id，使用获取推荐结果中返回的RecTraceId填入。<br>注意：如果和在线推荐请求中的traceId不同，会影响行为特征归因，影响推荐算法效果
                     */
                    std::string m_recTraceId;
                    bool m_recTraceIdHasBeenSet;

                    /**
                     * 算法来源：用来区分行为来源于哪个算法。值为**business，tencent，other** 三者之一<br>● business 表示业务自己的算法对照组<br>● tencent 为腾讯算法<br>● other 为其他算法
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 物料类型
                     */
                    int64_t m_itemType;
                    bool m_itemTypeHasBeenSet;

                    /**
                     * 微信开放平台上查看appId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 回传video_over事件的时候，回传的用户播放视频的总时长（真正播放的，拖动不算，单位为秒）
                     */
                    int64_t m_videoPlayDuration;
                    bool m_videoPlayDurationHasBeenSet;

                    /**
                     * 来源物料内容：用来标识在指定内容页面产生的行为，如需要统计用户在A内容详情页里，对推荐内容B点击等行为，则ReferrerItemId代表内容A，ItemId代表内容B
                     */
                    std::string m_referrerItemId;
                    bool m_referrerItemIdHasBeenSet;

                    /**
                     * 国家，统一用简写，比如中国则填写CN
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 省
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 区县
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * 客户端ip
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 客户端网络类型
                     */
                    std::string m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * 客户端平台，ios/android/h5
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 客户端app版本
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 操作系统版本
                     */
                    std::string m_osVersion;
                    bool m_osVersionHasBeenSet;

                    /**
                     * 机型
                     */
                    std::string m_deviceModel;
                    bool m_deviceModelHasBeenSet;

                    /**
                     * json字符串，用于行为数据的扩展
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220324_MODEL_DOCBEHAVIOR_H_
