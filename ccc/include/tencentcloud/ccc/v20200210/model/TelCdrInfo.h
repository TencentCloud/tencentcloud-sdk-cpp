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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SeatUserInfo.h>
#include <tencentcloud/ccc/v20200210/model/IVRKeyPressedElement.h>
#include <tencentcloud/ccc/v20200210/model/ServeParticipant.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 电话话单信息
                */
                class TelCdrInfo : public AbstractModel
                {
                public:
                    TelCdrInfo();
                    ~TelCdrInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主叫号码</p>
                     * @return Caller <p>主叫号码</p>
                     * 
                     */
                    std::string GetCaller() const;

                    /**
                     * 设置<p>主叫号码</p>
                     * @param _caller <p>主叫号码</p>
                     * 
                     */
                    void SetCaller(const std::string& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取<p>被叫号码</p>
                     * @return Callee <p>被叫号码</p>
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置<p>被叫号码</p>
                     * @param _callee <p>被叫号码</p>
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取<p>呼叫发起时间戳，Unix 时间戳</p>
                     * @return Time <p>呼叫发起时间戳，Unix 时间戳</p>
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置<p>呼叫发起时间戳，Unix 时间戳</p>
                     * @param _time <p>呼叫发起时间戳，Unix 时间戳</p>
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取<p>呼入呼出方向 0 呼入 1 呼出</p>
                     * @return Direction <p>呼入呼出方向 0 呼入 1 呼出</p>
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置<p>呼入呼出方向 0 呼入 1 呼出</p>
                     * @param _direction <p>呼入呼出方向 0 呼入 1 呼出</p>
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取<p>通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫</p>
                     * @return CallType <p>通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫</p>
                     * 
                     */
                    int64_t GetCallType() const;

                    /**
                     * 设置<p>通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫</p>
                     * @param _callType <p>通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫</p>
                     * 
                     */
                    void SetCallType(const int64_t& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取<p>通话时长</p>
                     * @return Duration <p>通话时长</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>通话时长</p>
                     * @param _duration <p>通话时长</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>录音信息</p>
                     * @return RecordURL <p>录音信息</p>
                     * 
                     */
                    std::string GetRecordURL() const;

                    /**
                     * 设置<p>录音信息</p>
                     * @param _recordURL <p>录音信息</p>
                     * 
                     */
                    void SetRecordURL(const std::string& _recordURL);

                    /**
                     * 判断参数 RecordURL 是否已赋值
                     * @return RecordURL 是否已赋值
                     * 
                     */
                    bool RecordURLHasBeenSet() const;

                    /**
                     * 获取<p>录音 ID</p>
                     * @return RecordId <p>录音 ID</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>录音 ID</p>
                     * @param _recordId <p>录音 ID</p>
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取<p>座席信息</p>
                     * @return SeatUser <p>座席信息</p>
                     * 
                     */
                    SeatUserInfo GetSeatUser() const;

                    /**
                     * 设置<p>座席信息</p>
                     * @param _seatUser <p>座席信息</p>
                     * 
                     */
                    void SetSeatUser(const SeatUserInfo& _seatUser);

                    /**
                     * 判断参数 SeatUser 是否已赋值
                     * @return SeatUser 是否已赋值
                     * 
                     */
                    bool SeatUserHasBeenSet() const;

                    /**
                     * 获取<p>EndStatus与EndStatusString一一对应，具体枚举如下：</p><p><strong>场景             EndStatus    EndStatusString    状态说明</strong></p><p>电话呼入&amp;呼出    1            ok                            <strong>正常通话</strong></p><p>电话呼入                 102            ivrGiveUp            <strong>IVR期间用户放弃</strong></p><p>电话呼入                 103            waitingGiveUp           <strong>排队时用户放弃</strong></p><p>电话呼入                 104            ringingGiveUp           <strong>振铃时用户放弃</strong></p><p>电话呼入                 105            noSeatOnline           <strong>无座席在线</strong></p><p>电话呼入              106           notWorkTime           <strong>非工作时间</strong>   </p><p>电话呼入                107           ivrEnd                   <strong>IVR全自动结束(无人工介入)</strong></p><p>电话呼入                100          blackList <strong>黑名单(系统侧)</strong></p><p>电话呼出             108            restrictedCallee    <strong>全局外呼风险号码拦截(系统侧)</strong></p><p>电话呼出             109            tooManyRequest        <strong>外呼频控拦截(系统侧)</strong></p><p>电话呼出             110            restrictedArea        <strong>外呼地域拦截(系统侧)</strong></p><p>电话呼出             111            restrictedTime    <strong>外呼时段拦截(系统侧)</strong></p><p>电话呼出             202            notAnswer     <strong>被叫未接听</strong></p><p>电话呼出            203        userReject    <strong>被叫拒接挂断</strong></p><p>电话呼出              204        powerOff    <strong>被叫关机</strong></p><p>电话呼出           205            numberNotExist    <strong>被叫空号</strong></p><p>电话呼出             206               busy    <strong>被叫忙</strong></p><p>电话呼出               207               outOfCredit    <strong>被叫欠费</strong></p><p>电话呼出             208               operatorError    <strong>运营商线路异常</strong></p><p>电话呼出             209               callerCancel    <strong>主叫取消</strong></p><p>电话呼出            210               notInService    <strong>被叫不在服务区</strong></p><p>电话呼入&amp;呼出    211    clientError    <strong>座席客户端错误</strong></p><p>电话呼出        212     carrierBlocked      <strong>运营商拦截</strong></p><p>电话呼出        213     callReminder      <strong>提示来电提醒</strong></p><p>电话呼出        215     numberInvalid      <strong>被叫号码无效</strong></p><p>电话呼出        216     callRestricted      <strong>提示呼叫受限</strong></p><p>电话呼出        217     calleeRestricted      <strong>被叫黑名单受限</strong></p><p>电话呼出        218     areaRestricted      <strong>被叫区域受限</strong></p><p>电话呼出        219     promptCallForwarding      <strong>提示呼叫转移</strong></p><p>电话呼出        220     callerCancelWhileRing      <strong>振铃中主叫取消</strong></p><p>电话呼出        221     callerCancelWithoutRing      <strong>未振铃被叫号码异常</strong></p><p>电话呼出        222     voiceMailReached      <strong>语音信箱挂断</strong></p><p>音频呼入        501     callConflict      <strong>VoIP用户呼叫冲突终止</strong></p><p>音频呼入        502     clientTimeout      <strong>VoIP用户客户端超时</strong></p><p>音频呼入        503     voipClientError      <strong>VoIP用户客户端错误</strong></p><p>中文详情<a href="https://www.tencentcloud.com/zh/document/product/1229/71847">参考</a></p><p>英文详情<a href="https://www.tencentcloud.com/document/product/1229/71847?lang=en">参考</a></p>
                     * @return EndStatus <p>EndStatus与EndStatusString一一对应，具体枚举如下：</p><p><strong>场景             EndStatus    EndStatusString    状态说明</strong></p><p>电话呼入&amp;呼出    1            ok                            <strong>正常通话</strong></p><p>电话呼入                 102            ivrGiveUp            <strong>IVR期间用户放弃</strong></p><p>电话呼入                 103            waitingGiveUp           <strong>排队时用户放弃</strong></p><p>电话呼入                 104            ringingGiveUp           <strong>振铃时用户放弃</strong></p><p>电话呼入                 105            noSeatOnline           <strong>无座席在线</strong></p><p>电话呼入              106           notWorkTime           <strong>非工作时间</strong>   </p><p>电话呼入                107           ivrEnd                   <strong>IVR全自动结束(无人工介入)</strong></p><p>电话呼入                100          blackList <strong>黑名单(系统侧)</strong></p><p>电话呼出             108            restrictedCallee    <strong>全局外呼风险号码拦截(系统侧)</strong></p><p>电话呼出             109            tooManyRequest        <strong>外呼频控拦截(系统侧)</strong></p><p>电话呼出             110            restrictedArea        <strong>外呼地域拦截(系统侧)</strong></p><p>电话呼出             111            restrictedTime    <strong>外呼时段拦截(系统侧)</strong></p><p>电话呼出             202            notAnswer     <strong>被叫未接听</strong></p><p>电话呼出            203        userReject    <strong>被叫拒接挂断</strong></p><p>电话呼出              204        powerOff    <strong>被叫关机</strong></p><p>电话呼出           205            numberNotExist    <strong>被叫空号</strong></p><p>电话呼出             206               busy    <strong>被叫忙</strong></p><p>电话呼出               207               outOfCredit    <strong>被叫欠费</strong></p><p>电话呼出             208               operatorError    <strong>运营商线路异常</strong></p><p>电话呼出             209               callerCancel    <strong>主叫取消</strong></p><p>电话呼出            210               notInService    <strong>被叫不在服务区</strong></p><p>电话呼入&amp;呼出    211    clientError    <strong>座席客户端错误</strong></p><p>电话呼出        212     carrierBlocked      <strong>运营商拦截</strong></p><p>电话呼出        213     callReminder      <strong>提示来电提醒</strong></p><p>电话呼出        215     numberInvalid      <strong>被叫号码无效</strong></p><p>电话呼出        216     callRestricted      <strong>提示呼叫受限</strong></p><p>电话呼出        217     calleeRestricted      <strong>被叫黑名单受限</strong></p><p>电话呼出        218     areaRestricted      <strong>被叫区域受限</strong></p><p>电话呼出        219     promptCallForwarding      <strong>提示呼叫转移</strong></p><p>电话呼出        220     callerCancelWhileRing      <strong>振铃中主叫取消</strong></p><p>电话呼出        221     callerCancelWithoutRing      <strong>未振铃被叫号码异常</strong></p><p>电话呼出        222     voiceMailReached      <strong>语音信箱挂断</strong></p><p>音频呼入        501     callConflict      <strong>VoIP用户呼叫冲突终止</strong></p><p>音频呼入        502     clientTimeout      <strong>VoIP用户客户端超时</strong></p><p>音频呼入        503     voipClientError      <strong>VoIP用户客户端错误</strong></p><p>中文详情<a href="https://www.tencentcloud.com/zh/document/product/1229/71847">参考</a></p><p>英文详情<a href="https://www.tencentcloud.com/document/product/1229/71847?lang=en">参考</a></p>
                     * 
                     */
                    int64_t GetEndStatus() const;

                    /**
                     * 设置<p>EndStatus与EndStatusString一一对应，具体枚举如下：</p><p><strong>场景             EndStatus    EndStatusString    状态说明</strong></p><p>电话呼入&amp;呼出    1            ok                            <strong>正常通话</strong></p><p>电话呼入                 102            ivrGiveUp            <strong>IVR期间用户放弃</strong></p><p>电话呼入                 103            waitingGiveUp           <strong>排队时用户放弃</strong></p><p>电话呼入                 104            ringingGiveUp           <strong>振铃时用户放弃</strong></p><p>电话呼入                 105            noSeatOnline           <strong>无座席在线</strong></p><p>电话呼入              106           notWorkTime           <strong>非工作时间</strong>   </p><p>电话呼入                107           ivrEnd                   <strong>IVR全自动结束(无人工介入)</strong></p><p>电话呼入                100          blackList <strong>黑名单(系统侧)</strong></p><p>电话呼出             108            restrictedCallee    <strong>全局外呼风险号码拦截(系统侧)</strong></p><p>电话呼出             109            tooManyRequest        <strong>外呼频控拦截(系统侧)</strong></p><p>电话呼出             110            restrictedArea        <strong>外呼地域拦截(系统侧)</strong></p><p>电话呼出             111            restrictedTime    <strong>外呼时段拦截(系统侧)</strong></p><p>电话呼出             202            notAnswer     <strong>被叫未接听</strong></p><p>电话呼出            203        userReject    <strong>被叫拒接挂断</strong></p><p>电话呼出              204        powerOff    <strong>被叫关机</strong></p><p>电话呼出           205            numberNotExist    <strong>被叫空号</strong></p><p>电话呼出             206               busy    <strong>被叫忙</strong></p><p>电话呼出               207               outOfCredit    <strong>被叫欠费</strong></p><p>电话呼出             208               operatorError    <strong>运营商线路异常</strong></p><p>电话呼出             209               callerCancel    <strong>主叫取消</strong></p><p>电话呼出            210               notInService    <strong>被叫不在服务区</strong></p><p>电话呼入&amp;呼出    211    clientError    <strong>座席客户端错误</strong></p><p>电话呼出        212     carrierBlocked      <strong>运营商拦截</strong></p><p>电话呼出        213     callReminder      <strong>提示来电提醒</strong></p><p>电话呼出        215     numberInvalid      <strong>被叫号码无效</strong></p><p>电话呼出        216     callRestricted      <strong>提示呼叫受限</strong></p><p>电话呼出        217     calleeRestricted      <strong>被叫黑名单受限</strong></p><p>电话呼出        218     areaRestricted      <strong>被叫区域受限</strong></p><p>电话呼出        219     promptCallForwarding      <strong>提示呼叫转移</strong></p><p>电话呼出        220     callerCancelWhileRing      <strong>振铃中主叫取消</strong></p><p>电话呼出        221     callerCancelWithoutRing      <strong>未振铃被叫号码异常</strong></p><p>电话呼出        222     voiceMailReached      <strong>语音信箱挂断</strong></p><p>音频呼入        501     callConflict      <strong>VoIP用户呼叫冲突终止</strong></p><p>音频呼入        502     clientTimeout      <strong>VoIP用户客户端超时</strong></p><p>音频呼入        503     voipClientError      <strong>VoIP用户客户端错误</strong></p><p>中文详情<a href="https://www.tencentcloud.com/zh/document/product/1229/71847">参考</a></p><p>英文详情<a href="https://www.tencentcloud.com/document/product/1229/71847?lang=en">参考</a></p>
                     * @param _endStatus <p>EndStatus与EndStatusString一一对应，具体枚举如下：</p><p><strong>场景             EndStatus    EndStatusString    状态说明</strong></p><p>电话呼入&amp;呼出    1            ok                            <strong>正常通话</strong></p><p>电话呼入                 102            ivrGiveUp            <strong>IVR期间用户放弃</strong></p><p>电话呼入                 103            waitingGiveUp           <strong>排队时用户放弃</strong></p><p>电话呼入                 104            ringingGiveUp           <strong>振铃时用户放弃</strong></p><p>电话呼入                 105            noSeatOnline           <strong>无座席在线</strong></p><p>电话呼入              106           notWorkTime           <strong>非工作时间</strong>   </p><p>电话呼入                107           ivrEnd                   <strong>IVR全自动结束(无人工介入)</strong></p><p>电话呼入                100          blackList <strong>黑名单(系统侧)</strong></p><p>电话呼出             108            restrictedCallee    <strong>全局外呼风险号码拦截(系统侧)</strong></p><p>电话呼出             109            tooManyRequest        <strong>外呼频控拦截(系统侧)</strong></p><p>电话呼出             110            restrictedArea        <strong>外呼地域拦截(系统侧)</strong></p><p>电话呼出             111            restrictedTime    <strong>外呼时段拦截(系统侧)</strong></p><p>电话呼出             202            notAnswer     <strong>被叫未接听</strong></p><p>电话呼出            203        userReject    <strong>被叫拒接挂断</strong></p><p>电话呼出              204        powerOff    <strong>被叫关机</strong></p><p>电话呼出           205            numberNotExist    <strong>被叫空号</strong></p><p>电话呼出             206               busy    <strong>被叫忙</strong></p><p>电话呼出               207               outOfCredit    <strong>被叫欠费</strong></p><p>电话呼出             208               operatorError    <strong>运营商线路异常</strong></p><p>电话呼出             209               callerCancel    <strong>主叫取消</strong></p><p>电话呼出            210               notInService    <strong>被叫不在服务区</strong></p><p>电话呼入&amp;呼出    211    clientError    <strong>座席客户端错误</strong></p><p>电话呼出        212     carrierBlocked      <strong>运营商拦截</strong></p><p>电话呼出        213     callReminder      <strong>提示来电提醒</strong></p><p>电话呼出        215     numberInvalid      <strong>被叫号码无效</strong></p><p>电话呼出        216     callRestricted      <strong>提示呼叫受限</strong></p><p>电话呼出        217     calleeRestricted      <strong>被叫黑名单受限</strong></p><p>电话呼出        218     areaRestricted      <strong>被叫区域受限</strong></p><p>电话呼出        219     promptCallForwarding      <strong>提示呼叫转移</strong></p><p>电话呼出        220     callerCancelWhileRing      <strong>振铃中主叫取消</strong></p><p>电话呼出        221     callerCancelWithoutRing      <strong>未振铃被叫号码异常</strong></p><p>电话呼出        222     voiceMailReached      <strong>语音信箱挂断</strong></p><p>音频呼入        501     callConflict      <strong>VoIP用户呼叫冲突终止</strong></p><p>音频呼入        502     clientTimeout      <strong>VoIP用户客户端超时</strong></p><p>音频呼入        503     voipClientError      <strong>VoIP用户客户端错误</strong></p><p>中文详情<a href="https://www.tencentcloud.com/zh/document/product/1229/71847">参考</a></p><p>英文详情<a href="https://www.tencentcloud.com/document/product/1229/71847?lang=en">参考</a></p>
                     * 
                     */
                    void SetEndStatus(const int64_t& _endStatus);

                    /**
                     * 判断参数 EndStatus 是否已赋值
                     * @return EndStatus 是否已赋值
                     * 
                     */
                    bool EndStatusHasBeenSet() const;

                    /**
                     * 获取<p>技能组名称</p>
                     * @return SkillGroup <p>技能组名称</p>
                     * 
                     */
                    std::string GetSkillGroup() const;

                    /**
                     * 设置<p>技能组名称</p>
                     * @param _skillGroup <p>技能组名称</p>
                     * 
                     */
                    void SetSkillGroup(const std::string& _skillGroup);

                    /**
                     * 判断参数 SkillGroup 是否已赋值
                     * @return SkillGroup 是否已赋值
                     * 
                     */
                    bool SkillGroupHasBeenSet() const;

                    /**
                     * 获取<p>主叫归属地</p>
                     * @return CallerLocation <p>主叫归属地</p>
                     * 
                     */
                    std::string GetCallerLocation() const;

                    /**
                     * 设置<p>主叫归属地</p>
                     * @param _callerLocation <p>主叫归属地</p>
                     * 
                     */
                    void SetCallerLocation(const std::string& _callerLocation);

                    /**
                     * 判断参数 CallerLocation 是否已赋值
                     * @return CallerLocation 是否已赋值
                     * 
                     */
                    bool CallerLocationHasBeenSet() const;

                    /**
                     * 获取<p>IVR 阶段耗时</p>
                     * @return IVRDuration <p>IVR 阶段耗时</p>
                     * 
                     */
                    int64_t GetIVRDuration() const;

                    /**
                     * 设置<p>IVR 阶段耗时</p>
                     * @param _iVRDuration <p>IVR 阶段耗时</p>
                     * 
                     */
                    void SetIVRDuration(const int64_t& _iVRDuration);

                    /**
                     * 判断参数 IVRDuration 是否已赋值
                     * @return IVRDuration 是否已赋值
                     * 
                     */
                    bool IVRDurationHasBeenSet() const;

                    /**
                     * 获取<p>振铃时间戳，UNIX 秒级时间戳</p>
                     * @return RingTimestamp <p>振铃时间戳，UNIX 秒级时间戳</p>
                     * 
                     */
                    int64_t GetRingTimestamp() const;

                    /**
                     * 设置<p>振铃时间戳，UNIX 秒级时间戳</p>
                     * @param _ringTimestamp <p>振铃时间戳，UNIX 秒级时间戳</p>
                     * 
                     */
                    void SetRingTimestamp(const int64_t& _ringTimestamp);

                    /**
                     * 判断参数 RingTimestamp 是否已赋值
                     * @return RingTimestamp 是否已赋值
                     * 
                     */
                    bool RingTimestampHasBeenSet() const;

                    /**
                     * 获取<p>接听时间戳，UNIX 秒级时间戳</p>
                     * @return AcceptTimestamp <p>接听时间戳，UNIX 秒级时间戳</p>
                     * 
                     */
                    int64_t GetAcceptTimestamp() const;

                    /**
                     * 设置<p>接听时间戳，UNIX 秒级时间戳</p>
                     * @param _acceptTimestamp <p>接听时间戳，UNIX 秒级时间戳</p>
                     * 
                     */
                    void SetAcceptTimestamp(const int64_t& _acceptTimestamp);

                    /**
                     * 判断参数 AcceptTimestamp 是否已赋值
                     * @return AcceptTimestamp 是否已赋值
                     * 
                     */
                    bool AcceptTimestampHasBeenSet() const;

                    /**
                     * 获取<p>结束时间戳，UNIX 秒级时间戳</p>
                     * @return EndedTimestamp <p>结束时间戳，UNIX 秒级时间戳</p>
                     * 
                     */
                    int64_t GetEndedTimestamp() const;

                    /**
                     * 设置<p>结束时间戳，UNIX 秒级时间戳</p>
                     * @param _endedTimestamp <p>结束时间戳，UNIX 秒级时间戳</p>
                     * 
                     */
                    void SetEndedTimestamp(const int64_t& _endedTimestamp);

                    /**
                     * 判断参数 EndedTimestamp 是否已赋值
                     * @return EndedTimestamp 是否已赋值
                     * 
                     */
                    bool EndedTimestampHasBeenSet() const;

                    /**
                     * 获取<p>IVR 按键信息 ，e.g. [&quot;1&quot;,&quot;2&quot;,&quot;3&quot;]</p>
                     * @return IVRKeyPressed <p>IVR 按键信息 ，e.g. [&quot;1&quot;,&quot;2&quot;,&quot;3&quot;]</p>
                     * @deprecated
                     */
                    std::vector<std::string> GetIVRKeyPressed() const;

                    /**
                     * 设置<p>IVR 按键信息 ，e.g. [&quot;1&quot;,&quot;2&quot;,&quot;3&quot;]</p>
                     * @param _iVRKeyPressed <p>IVR 按键信息 ，e.g. [&quot;1&quot;,&quot;2&quot;,&quot;3&quot;]</p>
                     * @deprecated
                     */
                    void SetIVRKeyPressed(const std::vector<std::string>& _iVRKeyPressed);

                    /**
                     * 判断参数 IVRKeyPressed 是否已赋值
                     * @return IVRKeyPressed 是否已赋值
                     * @deprecated
                     */
                    bool IVRKeyPressedHasBeenSet() const;

                    /**
                     * 获取<p>IVR按键信息（e.g.xa0[{&quot;Key&quot;:&quot;1&quot;,&quot;Label&quot;:&quot;非常满意&quot;}]）</p>
                     * @return IVRKeyPressedEx <p>IVR按键信息（e.g.xa0[{&quot;Key&quot;:&quot;1&quot;,&quot;Label&quot;:&quot;非常满意&quot;}]）</p>
                     * 
                     */
                    std::vector<IVRKeyPressedElement> GetIVRKeyPressedEx() const;

                    /**
                     * 设置<p>IVR按键信息（e.g.xa0[{&quot;Key&quot;:&quot;1&quot;,&quot;Label&quot;:&quot;非常满意&quot;}]）</p>
                     * @param _iVRKeyPressedEx <p>IVR按键信息（e.g.xa0[{&quot;Key&quot;:&quot;1&quot;,&quot;Label&quot;:&quot;非常满意&quot;}]）</p>
                     * 
                     */
                    void SetIVRKeyPressedEx(const std::vector<IVRKeyPressedElement>& _iVRKeyPressedEx);

                    /**
                     * 判断参数 IVRKeyPressedEx 是否已赋值
                     * @return IVRKeyPressedEx 是否已赋值
                     * 
                     */
                    bool IVRKeyPressedExHasBeenSet() const;

                    /**
                     * 获取<p>挂机方 seat 座席 user 用户 system 系统</p>
                     * @return HungUpSide <p>挂机方 seat 座席 user 用户 system 系统</p>
                     * 
                     */
                    std::string GetHungUpSide() const;

                    /**
                     * 设置<p>挂机方 seat 座席 user 用户 system 系统</p>
                     * @param _hungUpSide <p>挂机方 seat 座席 user 用户 system 系统</p>
                     * 
                     */
                    void SetHungUpSide(const std::string& _hungUpSide);

                    /**
                     * 判断参数 HungUpSide 是否已赋值
                     * @return HungUpSide 是否已赋值
                     * 
                     */
                    bool HungUpSideHasBeenSet() const;

                    /**
                     * 获取<p>服务参与者列表</p>
                     * @return ServeParticipants <p>服务参与者列表</p>
                     * 
                     */
                    std::vector<ServeParticipant> GetServeParticipants() const;

                    /**
                     * 设置<p>服务参与者列表</p>
                     * @param _serveParticipants <p>服务参与者列表</p>
                     * 
                     */
                    void SetServeParticipants(const std::vector<ServeParticipant>& _serveParticipants);

                    /**
                     * 判断参数 ServeParticipants 是否已赋值
                     * @return ServeParticipants 是否已赋值
                     * 
                     */
                    bool ServeParticipantsHasBeenSet() const;

                    /**
                     * 获取<p>技能组ID</p>
                     * @return SkillGroupId <p>技能组ID</p>
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置<p>技能组ID</p>
                     * @param _skillGroupId <p>技能组ID</p>
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>参考 EndStatus 字段</p>
                     * @return EndStatusString <p>参考 EndStatus 字段</p>
                     * 
                     */
                    std::string GetEndStatusString() const;

                    /**
                     * 设置<p>参考 EndStatus 字段</p>
                     * @param _endStatusString <p>参考 EndStatus 字段</p>
                     * 
                     */
                    void SetEndStatusString(const std::string& _endStatusString);

                    /**
                     * 判断参数 EndStatusString 是否已赋值
                     * @return EndStatusString 是否已赋值
                     * 
                     */
                    bool EndStatusStringHasBeenSet() const;

                    /**
                     * 获取<p>会话开始时间戳，UNIX 秒级时间戳</p>
                     * @return StartTimestamp <p>会话开始时间戳，UNIX 秒级时间戳</p>
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置<p>会话开始时间戳，UNIX 秒级时间戳</p>
                     * @param _startTimestamp <p>会话开始时间戳，UNIX 秒级时间戳</p>
                     * 
                     */
                    void SetStartTimestamp(const int64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取<p>进入排队时间，Unix 秒级时间戳</p>
                     * @return QueuedTimestamp <p>进入排队时间，Unix 秒级时间戳</p>
                     * 
                     */
                    int64_t GetQueuedTimestamp() const;

                    /**
                     * 设置<p>进入排队时间，Unix 秒级时间戳</p>
                     * @param _queuedTimestamp <p>进入排队时间，Unix 秒级时间戳</p>
                     * 
                     */
                    void SetQueuedTimestamp(const int64_t& _queuedTimestamp);

                    /**
                     * 判断参数 QueuedTimestamp 是否已赋值
                     * @return QueuedTimestamp 是否已赋值
                     * 
                     */
                    bool QueuedTimestampHasBeenSet() const;

                    /**
                     * 获取<p>后置IVR按键信息（e.g.xa0[{&quot;Key&quot;:&quot;1&quot;,&quot;Label&quot;:&quot;非常满意&quot;}]）</p>
                     * @return PostIVRKeyPressed <p>后置IVR按键信息（e.g.xa0[{&quot;Key&quot;:&quot;1&quot;,&quot;Label&quot;:&quot;非常满意&quot;}]）</p>
                     * @deprecated
                     */
                    std::vector<IVRKeyPressedElement> GetPostIVRKeyPressed() const;

                    /**
                     * 设置<p>后置IVR按键信息（e.g.xa0[{&quot;Key&quot;:&quot;1&quot;,&quot;Label&quot;:&quot;非常满意&quot;}]）</p>
                     * @param _postIVRKeyPressed <p>后置IVR按键信息（e.g.xa0[{&quot;Key&quot;:&quot;1&quot;,&quot;Label&quot;:&quot;非常满意&quot;}]）</p>
                     * @deprecated
                     */
                    void SetPostIVRKeyPressed(const std::vector<IVRKeyPressedElement>& _postIVRKeyPressed);

                    /**
                     * 判断参数 PostIVRKeyPressed 是否已赋值
                     * @return PostIVRKeyPressed 是否已赋值
                     * @deprecated
                     */
                    bool PostIVRKeyPressedHasBeenSet() const;

                    /**
                     * 获取<p>满意度按键信息 Key 为 noInput 表示进入满意度但无按键</p>
                     * @return PostIVRKeyPressedEx <p>满意度按键信息 Key 为 noInput 表示进入满意度但无按键</p>
                     * 
                     */
                    std::vector<IVRKeyPressedElement> GetPostIVRKeyPressedEx() const;

                    /**
                     * 设置<p>满意度按键信息 Key 为 noInput 表示进入满意度但无按键</p>
                     * @param _postIVRKeyPressedEx <p>满意度按键信息 Key 为 noInput 表示进入满意度但无按键</p>
                     * 
                     */
                    void SetPostIVRKeyPressedEx(const std::vector<IVRKeyPressedElement>& _postIVRKeyPressedEx);

                    /**
                     * 判断参数 PostIVRKeyPressedEx 是否已赋值
                     * @return PostIVRKeyPressedEx 是否已赋值
                     * 
                     */
                    bool PostIVRKeyPressedExHasBeenSet() const;

                    /**
                     * 获取<p>排队技能组Id</p>
                     * @return QueuedSkillGroupId <p>排队技能组Id</p>
                     * 
                     */
                    int64_t GetQueuedSkillGroupId() const;

                    /**
                     * 设置<p>排队技能组Id</p>
                     * @param _queuedSkillGroupId <p>排队技能组Id</p>
                     * 
                     */
                    void SetQueuedSkillGroupId(const int64_t& _queuedSkillGroupId);

                    /**
                     * 判断参数 QueuedSkillGroupId 是否已赋值
                     * @return QueuedSkillGroupId 是否已赋值
                     * 
                     */
                    bool QueuedSkillGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>会话 ID</p>
                     * @return SessionId <p>会话 ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话 ID</p>
                     * @param _sessionId <p>会话 ID</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空</p>
                     * @return ProtectedCaller <p>主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空</p>
                     * 
                     */
                    std::string GetProtectedCaller() const;

                    /**
                     * 设置<p>主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空</p>
                     * @param _protectedCaller <p>主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空</p>
                     * 
                     */
                    void SetProtectedCaller(const std::string& _protectedCaller);

                    /**
                     * 判断参数 ProtectedCaller 是否已赋值
                     * @return ProtectedCaller 是否已赋值
                     * 
                     */
                    bool ProtectedCallerHasBeenSet() const;

                    /**
                     * 获取<p>被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空</p>
                     * @return ProtectedCallee <p>被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空</p>
                     * 
                     */
                    std::string GetProtectedCallee() const;

                    /**
                     * 设置<p>被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空</p>
                     * @param _protectedCallee <p>被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空</p>
                     * 
                     */
                    void SetProtectedCallee(const std::string& _protectedCallee);

                    /**
                     * 判断参数 ProtectedCallee 是否已赋值
                     * @return ProtectedCallee 是否已赋值
                     * 
                     */
                    bool ProtectedCalleeHasBeenSet() const;

                    /**
                     * 获取<p>客户自定义数据（User-to-User Interface）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uui <p>客户自定义数据（User-to-User Interface）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetUui() const;

                    /**
                     * 设置<p>客户自定义数据（User-to-User Interface）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uui <p>客户自定义数据（User-to-User Interface）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetUui(const std::string& _uui);

                    /**
                     * 判断参数 Uui 是否已赋值
                     * @return Uui 是否已赋值
                     * @deprecated
                     */
                    bool UuiHasBeenSet() const;

                    /**
                     * 获取<p>客户自定义数据（User-to-User Interface）</p>
                     * @return UUI <p>客户自定义数据（User-to-User Interface）</p>
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 设置<p>客户自定义数据（User-to-User Interface）</p>
                     * @param _uUI <p>客户自定义数据（User-to-User Interface）</p>
                     * 
                     */
                    void SetUUI(const std::string& _uUI);

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                    /**
                     * 获取<p>获取录音ASR文本信息地址</p>
                     * @return AsrUrl <p>获取录音ASR文本信息地址</p>
                     * 
                     */
                    std::string GetAsrUrl() const;

                    /**
                     * 设置<p>获取录音ASR文本信息地址</p>
                     * @param _asrUrl <p>获取录音ASR文本信息地址</p>
                     * 
                     */
                    void SetAsrUrl(const std::string& _asrUrl);

                    /**
                     * 判断参数 AsrUrl 是否已赋值
                     * @return AsrUrl 是否已赋值
                     * 
                     */
                    bool AsrUrlHasBeenSet() const;

                    /**
                     * 获取<p>AsrUrl的状态：Complete<br>已完成;<br>Processing<br>正在生成中;<br>NotExists<br>无记录(未开启生成离线asr或者无套餐包)</p>
                     * @return AsrStatus <p>AsrUrl的状态：Complete<br>已完成;<br>Processing<br>正在生成中;<br>NotExists<br>无记录(未开启生成离线asr或者无套餐包)</p>
                     * 
                     */
                    std::string GetAsrStatus() const;

                    /**
                     * 设置<p>AsrUrl的状态：Complete<br>已完成;<br>Processing<br>正在生成中;<br>NotExists<br>无记录(未开启生成离线asr或者无套餐包)</p>
                     * @param _asrStatus <p>AsrUrl的状态：Complete<br>已完成;<br>Processing<br>正在生成中;<br>NotExists<br>无记录(未开启生成离线asr或者无套餐包)</p>
                     * 
                     */
                    void SetAsrStatus(const std::string& _asrStatus);

                    /**
                     * 判断参数 AsrStatus 是否已赋值
                     * @return AsrStatus 是否已赋值
                     * 
                     */
                    bool AsrStatusHasBeenSet() const;

                    /**
                     * 获取<p>录音转存第三方COS地址</p>
                     * @return CustomRecordURL <p>录音转存第三方COS地址</p>
                     * 
                     */
                    std::string GetCustomRecordURL() const;

                    /**
                     * 设置<p>录音转存第三方COS地址</p>
                     * @param _customRecordURL <p>录音转存第三方COS地址</p>
                     * 
                     */
                    void SetCustomRecordURL(const std::string& _customRecordURL);

                    /**
                     * 判断参数 CustomRecordURL 是否已赋值
                     * @return CustomRecordURL 是否已赋值
                     * 
                     */
                    bool CustomRecordURLHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>排队技能组名称</p>
                     * @return QueuedSkillGroupName <p>排队技能组名称</p>
                     * 
                     */
                    std::string GetQueuedSkillGroupName() const;

                    /**
                     * 设置<p>排队技能组名称</p>
                     * @param _queuedSkillGroupName <p>排队技能组名称</p>
                     * 
                     */
                    void SetQueuedSkillGroupName(const std::string& _queuedSkillGroupName);

                    /**
                     * 判断参数 QueuedSkillGroupName 是否已赋值
                     * @return QueuedSkillGroupName 是否已赋值
                     * 
                     */
                    bool QueuedSkillGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>通话中语音留言录音URL</p>
                     * @return VoicemailRecordURL <p>通话中语音留言录音URL</p>
                     * 
                     */
                    std::vector<std::string> GetVoicemailRecordURL() const;

                    /**
                     * 设置<p>通话中语音留言录音URL</p>
                     * @param _voicemailRecordURL <p>通话中语音留言录音URL</p>
                     * 
                     */
                    void SetVoicemailRecordURL(const std::vector<std::string>& _voicemailRecordURL);

                    /**
                     * 判断参数 VoicemailRecordURL 是否已赋值
                     * @return VoicemailRecordURL 是否已赋值
                     * 
                     */
                    bool VoicemailRecordURLHasBeenSet() const;

                    /**
                     * 获取<p>通话中语音留言ASR文本信息地址</p>
                     * @return VoicemailAsrURL <p>通话中语音留言ASR文本信息地址</p>
                     * 
                     */
                    std::vector<std::string> GetVoicemailAsrURL() const;

                    /**
                     * 设置<p>通话中语音留言ASR文本信息地址</p>
                     * @param _voicemailAsrURL <p>通话中语音留言ASR文本信息地址</p>
                     * 
                     */
                    void SetVoicemailAsrURL(const std::vector<std::string>& _voicemailAsrURL);

                    /**
                     * 判断参数 VoicemailAsrURL 是否已赋值
                     * @return VoicemailAsrURL 是否已赋值
                     * 
                     */
                    bool VoicemailAsrURLHasBeenSet() const;

                    /**
                     * 获取<p>如果是智能体相关通话，这里是智能体 ID</p>
                     * @return AIAgentId <p>如果是智能体相关通话，这里是智能体 ID</p>
                     * 
                     */
                    int64_t GetAIAgentId() const;

                    /**
                     * 设置<p>如果是智能体相关通话，这里是智能体 ID</p>
                     * @param _aIAgentId <p>如果是智能体相关通话，这里是智能体 ID</p>
                     * 
                     */
                    void SetAIAgentId(const int64_t& _aIAgentId);

                    /**
                     * 判断参数 AIAgentId 是否已赋值
                     * @return AIAgentId 是否已赋值
                     * 
                     */
                    bool AIAgentIdHasBeenSet() const;

                    /**
                     * 获取<p>如果是智能体相关通话，这里是智能体名称</p>
                     * @return AIAgentName <p>如果是智能体相关通话，这里是智能体名称</p>
                     * 
                     */
                    std::string GetAIAgentName() const;

                    /**
                     * 设置<p>如果是智能体相关通话，这里是智能体名称</p>
                     * @param _aIAgentName <p>如果是智能体相关通话，这里是智能体名称</p>
                     * 
                     */
                    void SetAIAgentName(const std::string& _aIAgentName);

                    /**
                     * 判断参数 AIAgentName 是否已赋值
                     * @return AIAgentName 是否已赋值
                     * 
                     */
                    bool AIAgentNameHasBeenSet() const;

                    /**
                     * 获取<p>接通后系统挂断原因，枚举类似</p>
                     * @return SysHangupReason <p>接通后系统挂断原因，枚举类似</p>
                     * 
                     */
                    int64_t GetSysHangupReason() const;

                    /**
                     * 设置<p>接通后系统挂断原因，枚举类似</p>
                     * @param _sysHangupReason <p>接通后系统挂断原因，枚举类似</p>
                     * 
                     */
                    void SetSysHangupReason(const int64_t& _sysHangupReason);

                    /**
                     * 判断参数 SysHangupReason 是否已赋值
                     * @return SysHangupReason 是否已赋值
                     * 
                     */
                    bool SysHangupReasonHasBeenSet() const;

                    /**
                     * 获取<p>接通后系统挂断原因，文字描述信息</p>
                     * @return SysHangupReasonString <p>接通后系统挂断原因，文字描述信息</p>
                     * 
                     */
                    std::string GetSysHangupReasonString() const;

                    /**
                     * 设置<p>接通后系统挂断原因，文字描述信息</p>
                     * @param _sysHangupReasonString <p>接通后系统挂断原因，文字描述信息</p>
                     * 
                     */
                    void SetSysHangupReasonString(const std::string& _sysHangupReasonString);

                    /**
                     * 判断参数 SysHangupReasonString 是否已赋值
                     * @return SysHangupReasonString 是否已赋值
                     * 
                     */
                    bool SysHangupReasonStringHasBeenSet() const;

                private:

                    /**
                     * <p>主叫号码</p>
                     */
                    std::string m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * <p>被叫号码</p>
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * <p>呼叫发起时间戳，Unix 时间戳</p>
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>呼入呼出方向 0 呼入 1 呼出</p>
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫</p>
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * <p>通话时长</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>录音信息</p>
                     */
                    std::string m_recordURL;
                    bool m_recordURLHasBeenSet;

                    /**
                     * <p>录音 ID</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>座席信息</p>
                     */
                    SeatUserInfo m_seatUser;
                    bool m_seatUserHasBeenSet;

                    /**
                     * <p>EndStatus与EndStatusString一一对应，具体枚举如下：</p><p><strong>场景             EndStatus    EndStatusString    状态说明</strong></p><p>电话呼入&amp;呼出    1            ok                            <strong>正常通话</strong></p><p>电话呼入                 102            ivrGiveUp            <strong>IVR期间用户放弃</strong></p><p>电话呼入                 103            waitingGiveUp           <strong>排队时用户放弃</strong></p><p>电话呼入                 104            ringingGiveUp           <strong>振铃时用户放弃</strong></p><p>电话呼入                 105            noSeatOnline           <strong>无座席在线</strong></p><p>电话呼入              106           notWorkTime           <strong>非工作时间</strong>   </p><p>电话呼入                107           ivrEnd                   <strong>IVR全自动结束(无人工介入)</strong></p><p>电话呼入                100          blackList <strong>黑名单(系统侧)</strong></p><p>电话呼出             108            restrictedCallee    <strong>全局外呼风险号码拦截(系统侧)</strong></p><p>电话呼出             109            tooManyRequest        <strong>外呼频控拦截(系统侧)</strong></p><p>电话呼出             110            restrictedArea        <strong>外呼地域拦截(系统侧)</strong></p><p>电话呼出             111            restrictedTime    <strong>外呼时段拦截(系统侧)</strong></p><p>电话呼出             202            notAnswer     <strong>被叫未接听</strong></p><p>电话呼出            203        userReject    <strong>被叫拒接挂断</strong></p><p>电话呼出              204        powerOff    <strong>被叫关机</strong></p><p>电话呼出           205            numberNotExist    <strong>被叫空号</strong></p><p>电话呼出             206               busy    <strong>被叫忙</strong></p><p>电话呼出               207               outOfCredit    <strong>被叫欠费</strong></p><p>电话呼出             208               operatorError    <strong>运营商线路异常</strong></p><p>电话呼出             209               callerCancel    <strong>主叫取消</strong></p><p>电话呼出            210               notInService    <strong>被叫不在服务区</strong></p><p>电话呼入&amp;呼出    211    clientError    <strong>座席客户端错误</strong></p><p>电话呼出        212     carrierBlocked      <strong>运营商拦截</strong></p><p>电话呼出        213     callReminder      <strong>提示来电提醒</strong></p><p>电话呼出        215     numberInvalid      <strong>被叫号码无效</strong></p><p>电话呼出        216     callRestricted      <strong>提示呼叫受限</strong></p><p>电话呼出        217     calleeRestricted      <strong>被叫黑名单受限</strong></p><p>电话呼出        218     areaRestricted      <strong>被叫区域受限</strong></p><p>电话呼出        219     promptCallForwarding      <strong>提示呼叫转移</strong></p><p>电话呼出        220     callerCancelWhileRing      <strong>振铃中主叫取消</strong></p><p>电话呼出        221     callerCancelWithoutRing      <strong>未振铃被叫号码异常</strong></p><p>电话呼出        222     voiceMailReached      <strong>语音信箱挂断</strong></p><p>音频呼入        501     callConflict      <strong>VoIP用户呼叫冲突终止</strong></p><p>音频呼入        502     clientTimeout      <strong>VoIP用户客户端超时</strong></p><p>音频呼入        503     voipClientError      <strong>VoIP用户客户端错误</strong></p><p>中文详情<a href="https://www.tencentcloud.com/zh/document/product/1229/71847">参考</a></p><p>英文详情<a href="https://www.tencentcloud.com/document/product/1229/71847?lang=en">参考</a></p>
                     */
                    int64_t m_endStatus;
                    bool m_endStatusHasBeenSet;

                    /**
                     * <p>技能组名称</p>
                     */
                    std::string m_skillGroup;
                    bool m_skillGroupHasBeenSet;

                    /**
                     * <p>主叫归属地</p>
                     */
                    std::string m_callerLocation;
                    bool m_callerLocationHasBeenSet;

                    /**
                     * <p>IVR 阶段耗时</p>
                     */
                    int64_t m_iVRDuration;
                    bool m_iVRDurationHasBeenSet;

                    /**
                     * <p>振铃时间戳，UNIX 秒级时间戳</p>
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * <p>接听时间戳，UNIX 秒级时间戳</p>
                     */
                    int64_t m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * <p>结束时间戳，UNIX 秒级时间戳</p>
                     */
                    int64_t m_endedTimestamp;
                    bool m_endedTimestampHasBeenSet;

                    /**
                     * <p>IVR 按键信息 ，e.g. [&quot;1&quot;,&quot;2&quot;,&quot;3&quot;]</p>
                     */
                    std::vector<std::string> m_iVRKeyPressed;
                    bool m_iVRKeyPressedHasBeenSet;

                    /**
                     * <p>IVR按键信息（e.g.xa0[{&quot;Key&quot;:&quot;1&quot;,&quot;Label&quot;:&quot;非常满意&quot;}]）</p>
                     */
                    std::vector<IVRKeyPressedElement> m_iVRKeyPressedEx;
                    bool m_iVRKeyPressedExHasBeenSet;

                    /**
                     * <p>挂机方 seat 座席 user 用户 system 系统</p>
                     */
                    std::string m_hungUpSide;
                    bool m_hungUpSideHasBeenSet;

                    /**
                     * <p>服务参与者列表</p>
                     */
                    std::vector<ServeParticipant> m_serveParticipants;
                    bool m_serveParticipantsHasBeenSet;

                    /**
                     * <p>技能组ID</p>
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * <p>参考 EndStatus 字段</p>
                     */
                    std::string m_endStatusString;
                    bool m_endStatusStringHasBeenSet;

                    /**
                     * <p>会话开始时间戳，UNIX 秒级时间戳</p>
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * <p>进入排队时间，Unix 秒级时间戳</p>
                     */
                    int64_t m_queuedTimestamp;
                    bool m_queuedTimestampHasBeenSet;

                    /**
                     * <p>后置IVR按键信息（e.g.xa0[{&quot;Key&quot;:&quot;1&quot;,&quot;Label&quot;:&quot;非常满意&quot;}]）</p>
                     */
                    std::vector<IVRKeyPressedElement> m_postIVRKeyPressed;
                    bool m_postIVRKeyPressedHasBeenSet;

                    /**
                     * <p>满意度按键信息 Key 为 noInput 表示进入满意度但无按键</p>
                     */
                    std::vector<IVRKeyPressedElement> m_postIVRKeyPressedEx;
                    bool m_postIVRKeyPressedExHasBeenSet;

                    /**
                     * <p>排队技能组Id</p>
                     */
                    int64_t m_queuedSkillGroupId;
                    bool m_queuedSkillGroupIdHasBeenSet;

                    /**
                     * <p>会话 ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空</p>
                     */
                    std::string m_protectedCaller;
                    bool m_protectedCallerHasBeenSet;

                    /**
                     * <p>被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空</p>
                     */
                    std::string m_protectedCallee;
                    bool m_protectedCalleeHasBeenSet;

                    /**
                     * <p>客户自定义数据（User-to-User Interface）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uui;
                    bool m_uuiHasBeenSet;

                    /**
                     * <p>客户自定义数据（User-to-User Interface）</p>
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * <p>获取录音ASR文本信息地址</p>
                     */
                    std::string m_asrUrl;
                    bool m_asrUrlHasBeenSet;

                    /**
                     * <p>AsrUrl的状态：Complete<br>已完成;<br>Processing<br>正在生成中;<br>NotExists<br>无记录(未开启生成离线asr或者无套餐包)</p>
                     */
                    std::string m_asrStatus;
                    bool m_asrStatusHasBeenSet;

                    /**
                     * <p>录音转存第三方COS地址</p>
                     */
                    std::string m_customRecordURL;
                    bool m_customRecordURLHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>排队技能组名称</p>
                     */
                    std::string m_queuedSkillGroupName;
                    bool m_queuedSkillGroupNameHasBeenSet;

                    /**
                     * <p>通话中语音留言录音URL</p>
                     */
                    std::vector<std::string> m_voicemailRecordURL;
                    bool m_voicemailRecordURLHasBeenSet;

                    /**
                     * <p>通话中语音留言ASR文本信息地址</p>
                     */
                    std::vector<std::string> m_voicemailAsrURL;
                    bool m_voicemailAsrURLHasBeenSet;

                    /**
                     * <p>如果是智能体相关通话，这里是智能体 ID</p>
                     */
                    int64_t m_aIAgentId;
                    bool m_aIAgentIdHasBeenSet;

                    /**
                     * <p>如果是智能体相关通话，这里是智能体名称</p>
                     */
                    std::string m_aIAgentName;
                    bool m_aIAgentNameHasBeenSet;

                    /**
                     * <p>接通后系统挂断原因，枚举类似</p>
                     */
                    int64_t m_sysHangupReason;
                    bool m_sysHangupReasonHasBeenSet;

                    /**
                     * <p>接通后系统挂断原因，文字描述信息</p>
                     */
                    std::string m_sysHangupReasonString;
                    bool m_sysHangupReasonStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_
