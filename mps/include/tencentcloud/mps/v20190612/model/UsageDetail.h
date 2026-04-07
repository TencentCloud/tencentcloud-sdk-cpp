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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_USAGEDETAIL_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_USAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 广告配置及广告类型维度下的SSAI用量详情
                */
                class UsageDetail : public AbstractModel
                {
                public:
                    UsageDetail();
                    ~UsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>广告配置uniq_id</p>
                     * @return UniqId <p>广告配置uniq_id</p>
                     * 
                     */
                    std::string GetUniqId() const;

                    /**
                     * 设置<p>广告配置uniq_id</p>
                     * @param _uniqId <p>广告配置uniq_id</p>
                     * 
                     */
                    void SetUniqId(const std::string& _uniqId);

                    /**
                     * 判断参数 UniqId 是否已赋值
                     * @return UniqId 是否已赋值
                     * 
                     */
                    bool UniqIdHasBeenSet() const;

                    /**
                     * 获取<p>广告配置id</p>
                     * @return ChannelId <p>广告配置id</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>广告配置id</p>
                     * @param _channelId <p>广告配置id</p>
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>广告配置名称</p>
                     * @return ChannelName <p>广告配置名称</p>
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>广告配置名称</p>
                     * @param _channelName <p>广告配置名称</p>
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取<p>广告类型</p>
                     * @return AdType <p>广告类型</p>
                     * 
                     */
                    std::string GetAdType() const;

                    /**
                     * 设置<p>广告类型</p>
                     * @param _adType <p>广告类型</p>
                     * 
                     */
                    void SetAdType(const std::string& _adType);

                    /**
                     * 判断参数 AdType 是否已赋值
                     * @return AdType 是否已赋值
                     * 
                     */
                    bool AdTypeHasBeenSet() const;

                    /**
                     * 获取<p>广告请求成功数</p>
                     * @return AdRequestSuccess <p>广告请求成功数</p>
                     * 
                     */
                    uint64_t GetAdRequestSuccess() const;

                    /**
                     * 设置<p>广告请求成功数</p>
                     * @param _adRequestSuccess <p>广告请求成功数</p>
                     * 
                     */
                    void SetAdRequestSuccess(const uint64_t& _adRequestSuccess);

                    /**
                     * 判断参数 AdRequestSuccess 是否已赋值
                     * @return AdRequestSuccess 是否已赋值
                     * 
                     */
                    bool AdRequestSuccessHasBeenSet() const;

                    /**
                     * 获取<p>广告请求失败数</p>
                     * @return AdRequestFail <p>广告请求失败数</p>
                     * 
                     */
                    uint64_t GetAdRequestFail() const;

                    /**
                     * 设置<p>广告请求失败数</p>
                     * @param _adRequestFail <p>广告请求失败数</p>
                     * 
                     */
                    void SetAdRequestFail(const uint64_t& _adRequestFail);

                    /**
                     * 判断参数 AdRequestFail 是否已赋值
                     * @return AdRequestFail 是否已赋值
                     * 
                     */
                    bool AdRequestFailHasBeenSet() const;

                    /**
                     * 获取<p>广告曝光数</p>
                     * @return Impression <p>广告曝光数</p>
                     * 
                     */
                    uint64_t GetImpression() const;

                    /**
                     * 设置<p>广告曝光数</p>
                     * @param _impression <p>广告曝光数</p>
                     * 
                     */
                    void SetImpression(const uint64_t& _impression);

                    /**
                     * 判断参数 Impression 是否已赋值
                     * @return Impression 是否已赋值
                     * 
                     */
                    bool ImpressionHasBeenSet() const;

                    /**
                     * 获取<p>广告开始播放数</p>
                     * @return Start <p>广告开始播放数</p>
                     * 
                     */
                    uint64_t GetStart() const;

                    /**
                     * 设置<p>广告开始播放数</p>
                     * @param _start <p>广告开始播放数</p>
                     * 
                     */
                    void SetStart(const uint64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取<p>广告播放到1/4处数</p>
                     * @return FirstQuarter <p>广告播放到1/4处数</p>
                     * 
                     */
                    uint64_t GetFirstQuarter() const;

                    /**
                     * 设置<p>广告播放到1/4处数</p>
                     * @param _firstQuarter <p>广告播放到1/4处数</p>
                     * 
                     */
                    void SetFirstQuarter(const uint64_t& _firstQuarter);

                    /**
                     * 判断参数 FirstQuarter 是否已赋值
                     * @return FirstQuarter 是否已赋值
                     * 
                     */
                    bool FirstQuarterHasBeenSet() const;

                    /**
                     * 获取<p>广告播放到1/2处数</p>
                     * @return Midpoint <p>广告播放到1/2处数</p>
                     * 
                     */
                    uint64_t GetMidpoint() const;

                    /**
                     * 设置<p>广告播放到1/2处数</p>
                     * @param _midpoint <p>广告播放到1/2处数</p>
                     * 
                     */
                    void SetMidpoint(const uint64_t& _midpoint);

                    /**
                     * 判断参数 Midpoint 是否已赋值
                     * @return Midpoint 是否已赋值
                     * 
                     */
                    bool MidpointHasBeenSet() const;

                    /**
                     * 获取<p>广告播放到3/4处数</p>
                     * @return ThirdQuarter <p>广告播放到3/4处数</p>
                     * 
                     */
                    uint64_t GetThirdQuarter() const;

                    /**
                     * 设置<p>广告播放到3/4处数</p>
                     * @param _thirdQuarter <p>广告播放到3/4处数</p>
                     * 
                     */
                    void SetThirdQuarter(const uint64_t& _thirdQuarter);

                    /**
                     * 判断参数 ThirdQuarter 是否已赋值
                     * @return ThirdQuarter 是否已赋值
                     * 
                     */
                    bool ThirdQuarterHasBeenSet() const;

                    /**
                     * 获取<p>广告播放完成数</p>
                     * @return Complete <p>广告播放完成数</p>
                     * 
                     */
                    uint64_t GetComplete() const;

                    /**
                     * 设置<p>广告播放完成数</p>
                     * @param _complete <p>广告播放完成数</p>
                     * 
                     */
                    void SetComplete(const uint64_t& _complete);

                    /**
                     * 判断参数 Complete 是否已赋值
                     * @return Complete 是否已赋值
                     * 
                     */
                    bool CompleteHasBeenSet() const;

                    /**
                     * 获取<p>中贴广告标记时间</p>
                     * @return AdMarkerTime <p>中贴广告标记时间</p>
                     * 
                     */
                    double GetAdMarkerTime() const;

                    /**
                     * 设置<p>中贴广告标记时间</p>
                     * @param _adMarkerTime <p>中贴广告标记时间</p>
                     * 
                     */
                    void SetAdMarkerTime(const double& _adMarkerTime);

                    /**
                     * 判断参数 AdMarkerTime 是否已赋值
                     * @return AdMarkerTime 是否已赋值
                     * 
                     */
                    bool AdMarkerTimeHasBeenSet() const;

                    /**
                     * 获取<p>中贴个性化替换时间</p>
                     * @return ReplacedTime <p>中贴个性化替换时间</p>
                     * 
                     */
                    double GetReplacedTime() const;

                    /**
                     * 设置<p>中贴个性化替换时间</p>
                     * @param _replacedTime <p>中贴个性化替换时间</p>
                     * 
                     */
                    void SetReplacedTime(const double& _replacedTime);

                    /**
                     * 判断参数 ReplacedTime 是否已赋值
                     * @return ReplacedTime 是否已赋值
                     * 
                     */
                    bool ReplacedTimeHasBeenSet() const;

                    /**
                     * 获取<p>中贴个性化广告填充率</p>
                     * @return MidFillRate <p>中贴个性化广告填充率</p>
                     * 
                     */
                    double GetMidFillRate() const;

                    /**
                     * 设置<p>中贴个性化广告填充率</p>
                     * @param _midFillRate <p>中贴个性化广告填充率</p>
                     * 
                     */
                    void SetMidFillRate(const double& _midFillRate);

                    /**
                     * 判断参数 MidFillRate 是否已赋值
                     * @return MidFillRate 是否已赋值
                     * 
                     */
                    bool MidFillRateHasBeenSet() const;

                    /**
                     * 获取<p>前贴广告请求数</p>
                     * @return PreReqNum <p>前贴广告请求数</p>
                     * 
                     */
                    uint64_t GetPreReqNum() const;

                    /**
                     * 设置<p>前贴广告请求数</p>
                     * @param _preReqNum <p>前贴广告请求数</p>
                     * 
                     */
                    void SetPreReqNum(const uint64_t& _preReqNum);

                    /**
                     * 判断参数 PreReqNum 是否已赋值
                     * @return PreReqNum 是否已赋值
                     * 
                     */
                    bool PreReqNumHasBeenSet() const;

                    /**
                     * 获取<p>前贴广告替换数</p>
                     * @return PreReplacedNum <p>前贴广告替换数</p>
                     * 
                     */
                    uint64_t GetPreReplacedNum() const;

                    /**
                     * 设置<p>前贴广告替换数</p>
                     * @param _preReplacedNum <p>前贴广告替换数</p>
                     * 
                     */
                    void SetPreReplacedNum(const uint64_t& _preReplacedNum);

                    /**
                     * 判断参数 PreReplacedNum 是否已赋值
                     * @return PreReplacedNum 是否已赋值
                     * 
                     */
                    bool PreReplacedNumHasBeenSet() const;

                    /**
                     * 获取<p>前贴广告替换率</p>
                     * @return PreReplaceRate <p>前贴广告替换率</p>
                     * 
                     */
                    double GetPreReplaceRate() const;

                    /**
                     * 设置<p>前贴广告替换率</p>
                     * @param _preReplaceRate <p>前贴广告替换率</p>
                     * 
                     */
                    void SetPreReplaceRate(const double& _preReplaceRate);

                    /**
                     * 判断参数 PreReplaceRate 是否已赋值
                     * @return PreReplaceRate 是否已赋值
                     * 
                     */
                    bool PreReplaceRateHasBeenSet() const;

                    /**
                     * 获取<p>在清单中发现了广告标记次数</p>
                     * @return ADMarkerFound <p>在清单中发现了广告标记次数</p>
                     * 
                     */
                    uint64_t GetADMarkerFound() const;

                    /**
                     * 设置<p>在清单中发现了广告标记次数</p>
                     * @param _aDMarkerFound <p>在清单中发现了广告标记次数</p>
                     * 
                     */
                    void SetADMarkerFound(const uint64_t& _aDMarkerFound);

                    /**
                     * 判断参数 ADMarkerFound 是否已赋值
                     * @return ADMarkerFound 是否已赋值
                     * 
                     */
                    bool ADMarkerFoundHasBeenSet() const;

                    /**
                     * 获取<p>向ADS请求广告次数</p>
                     * @return MakeAdsRequest <p>向ADS请求广告次数</p>
                     * 
                     */
                    uint64_t GetMakeAdsRequest() const;

                    /**
                     * 设置<p>向ADS请求广告次数</p>
                     * @param _makeAdsRequest <p>向ADS请求广告次数</p>
                     * 
                     */
                    void SetMakeAdsRequest(const uint64_t& _makeAdsRequest);

                    /**
                     * 判断参数 MakeAdsRequest 是否已赋值
                     * @return MakeAdsRequest 是否已赋值
                     * 
                     */
                    bool MakeAdsRequestHasBeenSet() const;

                    /**
                     * 获取<p>从ADS收到VAST返回次数</p>
                     * @return VASTResponse <p>从ADS收到VAST返回次数</p>
                     * 
                     */
                    uint64_t GetVASTResponse() const;

                    /**
                     * 设置<p>从ADS收到VAST返回次数</p>
                     * @param _vASTResponse <p>从ADS收到VAST返回次数</p>
                     * 
                     */
                    void SetVASTResponse(const uint64_t& _vASTResponse);

                    /**
                     * 判断参数 VASTResponse 是否已赋值
                     * @return VASTResponse 是否已赋值
                     * 
                     */
                    bool VASTResponseHasBeenSet() const;

                    /**
                     * 获取<p>成功填充了广告次数</p>
                     * @return FilledAvail <p>成功填充了广告次数</p>
                     * 
                     */
                    uint64_t GetFilledAvail() const;

                    /**
                     * 设置<p>成功填充了广告次数</p>
                     * @param _filledAvail <p>成功填充了广告次数</p>
                     * 
                     */
                    void SetFilledAvail(const uint64_t& _filledAvail);

                    /**
                     * 判断参数 FilledAvail 是否已赋值
                     * @return FilledAvail 是否已赋值
                     * 
                     */
                    bool FilledAvailHasBeenSet() const;

                    /**
                     * 获取<p>执行广告替换时遇到问题次数</p>
                     * @return WarningNoAd <p>执行广告替换时遇到问题次数</p>
                     * 
                     */
                    uint64_t GetWarningNoAd() const;

                    /**
                     * 设置<p>执行广告替换时遇到问题次数</p>
                     * @param _warningNoAd <p>执行广告替换时遇到问题次数</p>
                     * 
                     */
                    void SetWarningNoAd(const uint64_t& _warningNoAd);

                    /**
                     * 判断参数 WarningNoAd 是否已赋值
                     * @return WarningNoAd 是否已赋值
                     * 
                     */
                    bool WarningNoAdHasBeenSet() const;

                    /**
                     * 获取<p>ADS返回超时次数</p>
                     * @return ErrorAdsTimeout <p>ADS返回超时次数</p>
                     * 
                     */
                    uint64_t GetErrorAdsTimeout() const;

                    /**
                     * 设置<p>ADS返回超时次数</p>
                     * @param _errorAdsTimeout <p>ADS返回超时次数</p>
                     * 
                     */
                    void SetErrorAdsTimeout(const uint64_t& _errorAdsTimeout);

                    /**
                     * 判断参数 ErrorAdsTimeout 是否已赋值
                     * @return ErrorAdsTimeout 是否已赋值
                     * 
                     */
                    bool ErrorAdsTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>ADS 返回了一个空的 VAST 响应次数</p>
                     * @return EmptyVASTResponse <p>ADS 返回了一个空的 VAST 响应次数</p>
                     * 
                     */
                    uint64_t GetEmptyVASTResponse() const;

                    /**
                     * 设置<p>ADS 返回了一个空的 VAST 响应次数</p>
                     * @param _emptyVASTResponse <p>ADS 返回了一个空的 VAST 响应次数</p>
                     * 
                     */
                    void SetEmptyVASTResponse(const uint64_t& _emptyVASTResponse);

                    /**
                     * 判断参数 EmptyVASTResponse 是否已赋值
                     * @return EmptyVASTResponse 是否已赋值
                     * 
                     */
                    bool EmptyVASTResponseHasBeenSet() const;

                    /**
                     * 获取<p>ADS 返回了一个空的VMAP 响应次数</p>
                     * @return EmptyVMAPResponse <p>ADS 返回了一个空的VMAP 响应次数</p>
                     * 
                     */
                    uint64_t GetEmptyVMAPResponse() const;

                    /**
                     * 设置<p>ADS 返回了一个空的VMAP 响应次数</p>
                     * @param _emptyVMAPResponse <p>ADS 返回了一个空的VMAP 响应次数</p>
                     * 
                     */
                    void SetEmptyVMAPResponse(const uint64_t& _emptyVMAPResponse);

                    /**
                     * 判断参数 EmptyVMAPResponse 是否已赋值
                     * @return EmptyVMAPResponse 是否已赋值
                     * 
                     */
                    bool EmptyVMAPResponseHasBeenSet() const;

                    /**
                     * 获取<p>日期</p>
                     * @return Date <p>日期</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>日期</p>
                     * @param _date <p>日期</p>
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>广告配置uniq_id</p>
                     */
                    std::string m_uniqId;
                    bool m_uniqIdHasBeenSet;

                    /**
                     * <p>广告配置id</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>广告配置名称</p>
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * <p>广告类型</p>
                     */
                    std::string m_adType;
                    bool m_adTypeHasBeenSet;

                    /**
                     * <p>广告请求成功数</p>
                     */
                    uint64_t m_adRequestSuccess;
                    bool m_adRequestSuccessHasBeenSet;

                    /**
                     * <p>广告请求失败数</p>
                     */
                    uint64_t m_adRequestFail;
                    bool m_adRequestFailHasBeenSet;

                    /**
                     * <p>广告曝光数</p>
                     */
                    uint64_t m_impression;
                    bool m_impressionHasBeenSet;

                    /**
                     * <p>广告开始播放数</p>
                     */
                    uint64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * <p>广告播放到1/4处数</p>
                     */
                    uint64_t m_firstQuarter;
                    bool m_firstQuarterHasBeenSet;

                    /**
                     * <p>广告播放到1/2处数</p>
                     */
                    uint64_t m_midpoint;
                    bool m_midpointHasBeenSet;

                    /**
                     * <p>广告播放到3/4处数</p>
                     */
                    uint64_t m_thirdQuarter;
                    bool m_thirdQuarterHasBeenSet;

                    /**
                     * <p>广告播放完成数</p>
                     */
                    uint64_t m_complete;
                    bool m_completeHasBeenSet;

                    /**
                     * <p>中贴广告标记时间</p>
                     */
                    double m_adMarkerTime;
                    bool m_adMarkerTimeHasBeenSet;

                    /**
                     * <p>中贴个性化替换时间</p>
                     */
                    double m_replacedTime;
                    bool m_replacedTimeHasBeenSet;

                    /**
                     * <p>中贴个性化广告填充率</p>
                     */
                    double m_midFillRate;
                    bool m_midFillRateHasBeenSet;

                    /**
                     * <p>前贴广告请求数</p>
                     */
                    uint64_t m_preReqNum;
                    bool m_preReqNumHasBeenSet;

                    /**
                     * <p>前贴广告替换数</p>
                     */
                    uint64_t m_preReplacedNum;
                    bool m_preReplacedNumHasBeenSet;

                    /**
                     * <p>前贴广告替换率</p>
                     */
                    double m_preReplaceRate;
                    bool m_preReplaceRateHasBeenSet;

                    /**
                     * <p>在清单中发现了广告标记次数</p>
                     */
                    uint64_t m_aDMarkerFound;
                    bool m_aDMarkerFoundHasBeenSet;

                    /**
                     * <p>向ADS请求广告次数</p>
                     */
                    uint64_t m_makeAdsRequest;
                    bool m_makeAdsRequestHasBeenSet;

                    /**
                     * <p>从ADS收到VAST返回次数</p>
                     */
                    uint64_t m_vASTResponse;
                    bool m_vASTResponseHasBeenSet;

                    /**
                     * <p>成功填充了广告次数</p>
                     */
                    uint64_t m_filledAvail;
                    bool m_filledAvailHasBeenSet;

                    /**
                     * <p>执行广告替换时遇到问题次数</p>
                     */
                    uint64_t m_warningNoAd;
                    bool m_warningNoAdHasBeenSet;

                    /**
                     * <p>ADS返回超时次数</p>
                     */
                    uint64_t m_errorAdsTimeout;
                    bool m_errorAdsTimeoutHasBeenSet;

                    /**
                     * <p>ADS 返回了一个空的 VAST 响应次数</p>
                     */
                    uint64_t m_emptyVASTResponse;
                    bool m_emptyVASTResponseHasBeenSet;

                    /**
                     * <p>ADS 返回了一个空的VMAP 响应次数</p>
                     */
                    uint64_t m_emptyVMAPResponse;
                    bool m_emptyVMAPResponseHasBeenSet;

                    /**
                     * <p>日期</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_USAGEDETAIL_H_
