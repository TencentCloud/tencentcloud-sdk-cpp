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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_RESULTLISTITEM_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_RESULTLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/PluginListItem.h>
#include <tencentcloud/ms/v20180408/model/OptPluginListItem.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * APK检测服务参数返回具体信息
                */
                class ResultListItem : public AbstractModel
                {
                public:
                    ResultListItem();
                    ~ResultListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取banner广告软件标记，分别为-1-不确定，0-否，1-是
                     * @return Banner banner广告软件标记，分别为-1-不确定，0-否，1-是
                     * 
                     */
                    std::string GetBanner() const;

                    /**
                     * 设置banner广告软件标记，分别为-1-不确定，0-否，1-是
                     * @param _banner banner广告软件标记，分别为-1-不确定，0-否，1-是
                     * 
                     */
                    void SetBanner(const std::string& _banner);

                    /**
                     * 判断参数 Banner 是否已赋值
                     * @return Banner 是否已赋值
                     * 
                     */
                    bool BannerHasBeenSet() const;

                    /**
                     * 获取精品推荐列表广告标记，分别为-1-不确定，0-否，1-是
                     * @return BoutiqueRecommand 精品推荐列表广告标记，分别为-1-不确定，0-否，1-是
                     * 
                     */
                    std::string GetBoutiqueRecommand() const;

                    /**
                     * 设置精品推荐列表广告标记，分别为-1-不确定，0-否，1-是
                     * @param _boutiqueRecommand 精品推荐列表广告标记，分别为-1-不确定，0-否，1-是
                     * 
                     */
                    void SetBoutiqueRecommand(const std::string& _boutiqueRecommand);

                    /**
                     * 判断参数 BoutiqueRecommand 是否已赋值
                     * @return BoutiqueRecommand 是否已赋值
                     * 
                     */
                    bool BoutiqueRecommandHasBeenSet() const;

                    /**
                     * 获取悬浮窗图标广告标记,分别为-1-不确定，0-否，1-是
                     * @return FloatWindows 悬浮窗图标广告标记,分别为-1-不确定，0-否，1-是
                     * 
                     */
                    std::string GetFloatWindows() const;

                    /**
                     * 设置悬浮窗图标广告标记,分别为-1-不确定，0-否，1-是
                     * @param _floatWindows 悬浮窗图标广告标记,分别为-1-不确定，0-否，1-是
                     * 
                     */
                    void SetFloatWindows(const std::string& _floatWindows);

                    /**
                     * 判断参数 FloatWindows 是否已赋值
                     * @return FloatWindows 是否已赋值
                     * 
                     */
                    bool FloatWindowsHasBeenSet() const;

                    /**
                     * 获取积分墙广告软件标记，分别为 -1 -不确定，0-否，1-是
                     * @return IntegralWall 积分墙广告软件标记，分别为 -1 -不确定，0-否，1-是
                     * 
                     */
                    std::string GetIntegralWall() const;

                    /**
                     * 设置积分墙广告软件标记，分别为 -1 -不确定，0-否，1-是
                     * @param _integralWall 积分墙广告软件标记，分别为 -1 -不确定，0-否，1-是
                     * 
                     */
                    void SetIntegralWall(const std::string& _integralWall);

                    /**
                     * 判断参数 IntegralWall 是否已赋值
                     * @return IntegralWall 是否已赋值
                     * 
                     */
                    bool IntegralWallHasBeenSet() const;

                    /**
                     * 获取安装包的md5
                     * @return Md5 安装包的md5
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置安装包的md5
                     * @param _md5 安装包的md5
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取通知栏广告软件标记，分别为-1-不确定，0-否，1-是
                     * @return NotifyBar 通知栏广告软件标记，分别为-1-不确定，0-否，1-是
                     * 
                     */
                    std::string GetNotifyBar() const;

                    /**
                     * 设置通知栏广告软件标记，分别为-1-不确定，0-否，1-是
                     * @param _notifyBar 通知栏广告软件标记，分别为-1-不确定，0-否，1-是
                     * 
                     */
                    void SetNotifyBar(const std::string& _notifyBar);

                    /**
                     * 判断参数 NotifyBar 是否已赋值
                     * @return NotifyBar 是否已赋值
                     * 
                     */
                    bool NotifyBarHasBeenSet() const;

                    /**
                     * 获取1表示官方，0表示非官方
                     * @return Official 1表示官方，0表示非官方
                     * 
                     */
                    std::string GetOfficial() const;

                    /**
                     * 设置1表示官方，0表示非官方
                     * @param _official 1表示官方，0表示非官方
                     * 
                     */
                    void SetOfficial(const std::string& _official);

                    /**
                     * 判断参数 Official 是否已赋值
                     * @return Official 是否已赋值
                     * 
                     */
                    bool OfficialHasBeenSet() const;

                    /**
                     * 获取广告插件结果列表
                     * @return PluginList 广告插件结果列表
                     * 
                     */
                    std::vector<PluginListItem> GetPluginList() const;

                    /**
                     * 设置广告插件结果列表
                     * @param _pluginList 广告插件结果列表
                     * 
                     */
                    void SetPluginList(const std::vector<PluginListItem>& _pluginList);

                    /**
                     * 判断参数 PluginList 是否已赋值
                     * @return PluginList 是否已赋值
                     * 
                     */
                    bool PluginListHasBeenSet() const;

                    /**
                     * 获取非广告插件结果列表(SDK、风险插件等)
                     * @return OptPluginList 非广告插件结果列表(SDK、风险插件等)
                     * 
                     */
                    std::vector<OptPluginListItem> GetOptPluginList() const;

                    /**
                     * 设置非广告插件结果列表(SDK、风险插件等)
                     * @param _optPluginList 非广告插件结果列表(SDK、风险插件等)
                     * 
                     */
                    void SetOptPluginList(const std::vector<OptPluginListItem>& _optPluginList);

                    /**
                     * 判断参数 OptPluginList 是否已赋值
                     * @return OptPluginList 是否已赋值
                     * 
                     */
                    bool OptPluginListHasBeenSet() const;

                    /**
                     * 获取数字类型，分别为0-未知， 1-安全软件，2-风险软件，3-病毒软件
                     * @return SafeType 数字类型，分别为0-未知， 1-安全软件，2-风险软件，3-病毒软件
                     * 
                     */
                    std::string GetSafeType() const;

                    /**
                     * 设置数字类型，分别为0-未知， 1-安全软件，2-风险软件，3-病毒软件
                     * @param _safeType 数字类型，分别为0-未知， 1-安全软件，2-风险软件，3-病毒软件
                     * 
                     */
                    void SetSafeType(const std::string& _safeType);

                    /**
                     * 判断参数 SafeType 是否已赋值
                     * @return SafeType 是否已赋值
                     * 
                     */
                    bool SafeTypeHasBeenSet() const;

                    /**
                     * 获取Session id，合作方可以用来区分回调数据，需要唯一。
                     * @return Sid Session id，合作方可以用来区分回调数据，需要唯一。
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置Session id，合作方可以用来区分回调数据，需要唯一。
                     * @param _sid Session id，合作方可以用来区分回调数据，需要唯一。
                     * 
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     * 
                     */
                    bool SidHasBeenSet() const;

                    /**
                     * 获取安装包名称
                     * @return SoftName 安装包名称
                     * 
                     */
                    std::string GetSoftName() const;

                    /**
                     * 设置安装包名称
                     * @param _softName 安装包名称
                     * 
                     */
                    void SetSoftName(const std::string& _softName);

                    /**
                     * 判断参数 SoftName 是否已赋值
                     * @return SoftName 是否已赋值
                     * 
                     */
                    bool SoftNameHasBeenSet() const;

                    /**
                     * 获取插播广告软件标记，取值：-1 不确定，0否， 1 是
                     * @return Spot 插播广告软件标记，取值：-1 不确定，0否， 1 是
                     * 
                     */
                    std::string GetSpot() const;

                    /**
                     * 设置插播广告软件标记，取值：-1 不确定，0否， 1 是
                     * @param _spot 插播广告软件标记，取值：-1 不确定，0否， 1 是
                     * 
                     */
                    void SetSpot(const std::string& _spot);

                    /**
                     * 判断参数 Spot 是否已赋值
                     * @return Spot 是否已赋值
                     * 
                     */
                    bool SpotHasBeenSet() const;

                    /**
                     * 获取病毒名称，utf8编码
                     * @return VirusName 病毒名称，utf8编码
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置病毒名称，utf8编码
                     * @param _virusName 病毒名称，utf8编码
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取病毒描述，utf8编码
                     * @return VirusDesc 病毒描述，utf8编码
                     * 
                     */
                    std::string GetVirusDesc() const;

                    /**
                     * 设置病毒描述，utf8编码
                     * @param _virusDesc 病毒描述，utf8编码
                     * 
                     */
                    void SetVirusDesc(const std::string& _virusDesc);

                    /**
                     * 判断参数 VirusDesc 是否已赋值
                     * @return VirusDesc 是否已赋值
                     * 
                     */
                    bool VirusDescHasBeenSet() const;

                    /**
                     * 获取二次打包状态：0-表示默认；1-表示二次
                     * @return RepackageStatus 二次打包状态：0-表示默认；1-表示二次
                     * 
                     */
                    std::string GetRepackageStatus() const;

                    /**
                     * 设置二次打包状态：0-表示默认；1-表示二次
                     * @param _repackageStatus 二次打包状态：0-表示默认；1-表示二次
                     * 
                     */
                    void SetRepackageStatus(const std::string& _repackageStatus);

                    /**
                     * 判断参数 RepackageStatus 是否已赋值
                     * @return RepackageStatus 是否已赋值
                     * 
                     */
                    bool RepackageStatusHasBeenSet() const;

                    /**
                     * 获取应用错误码：0、1-表示正常；                  

2表示System Error(engine analysis error).

3表示App analysis error, please confirm it.

4表示App have not cert, please confirm it.

5表示App size is zero, please confirm it.

6表示App have not package name, please confirm it.

7表示App build time is empty, please confirm it.

8表示App have not valid cert, please confirm it.

99表示Other error.

1000表示App downloadlink download fail, please confirm it.

1001表示APP md5 different between real md5, please confirm it.

1002表示App md5 uncollect, please offer downloadlink.
                     * @return Errno 应用错误码：0、1-表示正常；                  

2表示System Error(engine analysis error).

3表示App analysis error, please confirm it.

4表示App have not cert, please confirm it.

5表示App size is zero, please confirm it.

6表示App have not package name, please confirm it.

7表示App build time is empty, please confirm it.

8表示App have not valid cert, please confirm it.

99表示Other error.

1000表示App downloadlink download fail, please confirm it.

1001表示APP md5 different between real md5, please confirm it.

1002表示App md5 uncollect, please offer downloadlink.
                     * @deprecated
                     */
                    std::string GetErrno() const;

                    /**
                     * 设置应用错误码：0、1-表示正常；                  

2表示System Error(engine analysis error).

3表示App analysis error, please confirm it.

4表示App have not cert, please confirm it.

5表示App size is zero, please confirm it.

6表示App have not package name, please confirm it.

7表示App build time is empty, please confirm it.

8表示App have not valid cert, please confirm it.

99表示Other error.

1000表示App downloadlink download fail, please confirm it.

1001表示APP md5 different between real md5, please confirm it.

1002表示App md5 uncollect, please offer downloadlink.
                     * @param _errno 应用错误码：0、1-表示正常；                  

2表示System Error(engine analysis error).

3表示App analysis error, please confirm it.

4表示App have not cert, please confirm it.

5表示App size is zero, please confirm it.

6表示App have not package name, please confirm it.

7表示App build time is empty, please confirm it.

8表示App have not valid cert, please confirm it.

99表示Other error.

1000表示App downloadlink download fail, please confirm it.

1001表示APP md5 different between real md5, please confirm it.

1002表示App md5 uncollect, please offer downloadlink.
                     * @deprecated
                     */
                    void SetErrno(const std::string& _errno);

                    /**
                     * 判断参数 Errno 是否已赋值
                     * @return Errno 是否已赋值
                     * @deprecated
                     */
                    bool ErrnoHasBeenSet() const;

                    /**
                     * 获取对应errno的错误信息描述
                     * @return ErrMsg 对应errno的错误信息描述
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置对应errno的错误信息描述
                     * @param _errMsg 对应errno的错误信息描述
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取应用错误码：0、1-表示正常；                  

2表示System Error(engine analysis error).

3表示App analysis error, please confirm it.

4表示App have not cert, please confirm it.

5表示App size is zero, please confirm it.

6表示App have not package name, please confirm it.

7表示App build time is empty, please confirm it.

8表示App have not valid cert, please confirm it.

99表示Other error.

1000表示App downloadlink download fail, please confirm it.

1001表示APP md5 different between real md5, please confirm it.

1002表示App md5 uncollect, please offer downloadlink.
                     * @return ErrNo 应用错误码：0、1-表示正常；                  

2表示System Error(engine analysis error).

3表示App analysis error, please confirm it.

4表示App have not cert, please confirm it.

5表示App size is zero, please confirm it.

6表示App have not package name, please confirm it.

7表示App build time is empty, please confirm it.

8表示App have not valid cert, please confirm it.

99表示Other error.

1000表示App downloadlink download fail, please confirm it.

1001表示APP md5 different between real md5, please confirm it.

1002表示App md5 uncollect, please offer downloadlink.
                     * 
                     */
                    std::string GetErrNo() const;

                    /**
                     * 设置应用错误码：0、1-表示正常；                  

2表示System Error(engine analysis error).

3表示App analysis error, please confirm it.

4表示App have not cert, please confirm it.

5表示App size is zero, please confirm it.

6表示App have not package name, please confirm it.

7表示App build time is empty, please confirm it.

8表示App have not valid cert, please confirm it.

99表示Other error.

1000表示App downloadlink download fail, please confirm it.

1001表示APP md5 different between real md5, please confirm it.

1002表示App md5 uncollect, please offer downloadlink.
                     * @param _errNo 应用错误码：0、1-表示正常；                  

2表示System Error(engine analysis error).

3表示App analysis error, please confirm it.

4表示App have not cert, please confirm it.

5表示App size is zero, please confirm it.

6表示App have not package name, please confirm it.

7表示App build time is empty, please confirm it.

8表示App have not valid cert, please confirm it.

99表示Other error.

1000表示App downloadlink download fail, please confirm it.

1001表示APP md5 different between real md5, please confirm it.

1002表示App md5 uncollect, please offer downloadlink.
                     * 
                     */
                    void SetErrNo(const std::string& _errNo);

                    /**
                     * 判断参数 ErrNo 是否已赋值
                     * @return ErrNo 是否已赋值
                     * 
                     */
                    bool ErrNoHasBeenSet() const;

                private:

                    /**
                     * banner广告软件标记，分别为-1-不确定，0-否，1-是
                     */
                    std::string m_banner;
                    bool m_bannerHasBeenSet;

                    /**
                     * 精品推荐列表广告标记，分别为-1-不确定，0-否，1-是
                     */
                    std::string m_boutiqueRecommand;
                    bool m_boutiqueRecommandHasBeenSet;

                    /**
                     * 悬浮窗图标广告标记,分别为-1-不确定，0-否，1-是
                     */
                    std::string m_floatWindows;
                    bool m_floatWindowsHasBeenSet;

                    /**
                     * 积分墙广告软件标记，分别为 -1 -不确定，0-否，1-是
                     */
                    std::string m_integralWall;
                    bool m_integralWallHasBeenSet;

                    /**
                     * 安装包的md5
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 通知栏广告软件标记，分别为-1-不确定，0-否，1-是
                     */
                    std::string m_notifyBar;
                    bool m_notifyBarHasBeenSet;

                    /**
                     * 1表示官方，0表示非官方
                     */
                    std::string m_official;
                    bool m_officialHasBeenSet;

                    /**
                     * 广告插件结果列表
                     */
                    std::vector<PluginListItem> m_pluginList;
                    bool m_pluginListHasBeenSet;

                    /**
                     * 非广告插件结果列表(SDK、风险插件等)
                     */
                    std::vector<OptPluginListItem> m_optPluginList;
                    bool m_optPluginListHasBeenSet;

                    /**
                     * 数字类型，分别为0-未知， 1-安全软件，2-风险软件，3-病毒软件
                     */
                    std::string m_safeType;
                    bool m_safeTypeHasBeenSet;

                    /**
                     * Session id，合作方可以用来区分回调数据，需要唯一。
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * 安装包名称
                     */
                    std::string m_softName;
                    bool m_softNameHasBeenSet;

                    /**
                     * 插播广告软件标记，取值：-1 不确定，0否， 1 是
                     */
                    std::string m_spot;
                    bool m_spotHasBeenSet;

                    /**
                     * 病毒名称，utf8编码
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * 病毒描述，utf8编码
                     */
                    std::string m_virusDesc;
                    bool m_virusDescHasBeenSet;

                    /**
                     * 二次打包状态：0-表示默认；1-表示二次
                     */
                    std::string m_repackageStatus;
                    bool m_repackageStatusHasBeenSet;

                    /**
                     * 应用错误码：0、1-表示正常；                  

2表示System Error(engine analysis error).

3表示App analysis error, please confirm it.

4表示App have not cert, please confirm it.

5表示App size is zero, please confirm it.

6表示App have not package name, please confirm it.

7表示App build time is empty, please confirm it.

8表示App have not valid cert, please confirm it.

99表示Other error.

1000表示App downloadlink download fail, please confirm it.

1001表示APP md5 different between real md5, please confirm it.

1002表示App md5 uncollect, please offer downloadlink.
                     */
                    std::string m_errno;
                    bool m_errnoHasBeenSet;

                    /**
                     * 对应errno的错误信息描述
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 应用错误码：0、1-表示正常；                  

2表示System Error(engine analysis error).

3表示App analysis error, please confirm it.

4表示App have not cert, please confirm it.

5表示App size is zero, please confirm it.

6表示App have not package name, please confirm it.

7表示App build time is empty, please confirm it.

8表示App have not valid cert, please confirm it.

99表示Other error.

1000表示App downloadlink download fail, please confirm it.

1001表示APP md5 different between real md5, please confirm it.

1002表示App md5 uncollect, please offer downloadlink.
                     */
                    std::string m_errNo;
                    bool m_errNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_RESULTLISTITEM_H_
