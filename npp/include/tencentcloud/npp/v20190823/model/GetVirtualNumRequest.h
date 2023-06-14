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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_GETVIRTUALNUMREQUEST_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_GETVIRTUALNUMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Npp
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * GetVirtualNum请求参数结构体
                */
                class GetVirtualNumRequest : public AbstractModel
                {
                public:
                    GetVirtualNumRequest();
                    ~GetVirtualNumRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务appid
                     * @return BizAppId 业务appid
                     * 
                     */
                    std::string GetBizAppId() const;

                    /**
                     * 设置业务appid
                     * @param _bizAppId 业务appid
                     * 
                     */
                    void SetBizAppId(const std::string& _bizAppId);

                    /**
                     * 判断参数 BizAppId 是否已赋值
                     * @return BizAppId 是否已赋值
                     * 
                     */
                    bool BizAppIdHasBeenSet() const;

                    /**
                     * 获取被叫号码(号码前加 0086，如 008613631686024)
                     * @return Dst 被叫号码(号码前加 0086，如 008613631686024)
                     * 
                     */
                    std::string GetDst() const;

                    /**
                     * 设置被叫号码(号码前加 0086，如 008613631686024)
                     * @param _dst 被叫号码(号码前加 0086，如 008613631686024)
                     * 
                     */
                    void SetDst(const std::string& _dst);

                    /**
                     * 判断参数 Dst 是否已赋值
                     * @return Dst 是否已赋值
                     * 
                     */
                    bool DstHasBeenSet() const;

                    /**
                     * 获取主叫号码(号码前加 0086，如 008613631686024)，xb 模式下是不用填写，axb 模式下是必选
                     * @return Src 主叫号码(号码前加 0086，如 008613631686024)，xb 模式下是不用填写，axb 模式下是必选
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置主叫号码(号码前加 0086，如 008613631686024)，xb 模式下是不用填写，axb 模式下是必选
                     * @param _src 主叫号码(号码前加 0086，如 008613631686024)，xb 模式下是不用填写，axb 模式下是必选
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取{“accreditList”:[“008613631686024”,”008612345678910”]}，主要用于 N-1 场景，号码绑定非共享是独占型，指定了 dst 独占中间号绑定，accreditList 表示这个列表成员可以拨打 dst 绑 定的中间号，默认值为空，表示所有号码都可以拨打独占型中间号绑定，最大集合不允许超过 30 个，仅适用于xb模式
                     * @return AccreditList {“accreditList”:[“008613631686024”,”008612345678910”]}，主要用于 N-1 场景，号码绑定非共享是独占型，指定了 dst 独占中间号绑定，accreditList 表示这个列表成员可以拨打 dst 绑 定的中间号，默认值为空，表示所有号码都可以拨打独占型中间号绑定，最大集合不允许超过 30 个，仅适用于xb模式
                     * 
                     */
                    std::vector<std::string> GetAccreditList() const;

                    /**
                     * 设置{“accreditList”:[“008613631686024”,”008612345678910”]}，主要用于 N-1 场景，号码绑定非共享是独占型，指定了 dst 独占中间号绑定，accreditList 表示这个列表成员可以拨打 dst 绑 定的中间号，默认值为空，表示所有号码都可以拨打独占型中间号绑定，最大集合不允许超过 30 个，仅适用于xb模式
                     * @param _accreditList {“accreditList”:[“008613631686024”,”008612345678910”]}，主要用于 N-1 场景，号码绑定非共享是独占型，指定了 dst 独占中间号绑定，accreditList 表示这个列表成员可以拨打 dst 绑 定的中间号，默认值为空，表示所有号码都可以拨打独占型中间号绑定，最大集合不允许超过 30 个，仅适用于xb模式
                     * 
                     */
                    void SetAccreditList(const std::vector<std::string>& _accreditList);

                    /**
                     * 判断参数 AccreditList 是否已赋值
                     * @return AccreditList 是否已赋值
                     * 
                     */
                    bool AccreditListHasBeenSet() const;

                    /**
                     * 获取指定中间号（格式：008617013541251），如果该中间号已被使用则返回绑定失败。如果不带该字段则由腾讯侧从号码池里自动分配
                     * @return AssignVirtualNum 指定中间号（格式：008617013541251），如果该中间号已被使用则返回绑定失败。如果不带该字段则由腾讯侧从号码池里自动分配
                     * 
                     */
                    std::string GetAssignVirtualNum() const;

                    /**
                     * 设置指定中间号（格式：008617013541251），如果该中间号已被使用则返回绑定失败。如果不带该字段则由腾讯侧从号码池里自动分配
                     * @param _assignVirtualNum 指定中间号（格式：008617013541251），如果该中间号已被使用则返回绑定失败。如果不带该字段则由腾讯侧从号码池里自动分配
                     * 
                     */
                    void SetAssignVirtualNum(const std::string& _assignVirtualNum);

                    /**
                     * 判断参数 AssignVirtualNum 是否已赋值
                     * @return AssignVirtualNum 是否已赋值
                     * 
                     */
                    bool AssignVirtualNumHasBeenSet() const;

                    /**
                     * 获取是否录音，0表示不录音，1表示录音。默认为不录音，注意如果需要录音回调，通话完成后需要等待一段时间，收到录音回调之后，再解绑中间号。
                     * @return Record 是否录音，0表示不录音，1表示录音。默认为不录音，注意如果需要录音回调，通话完成后需要等待一段时间，收到录音回调之后，再解绑中间号。
                     * 
                     */
                    std::string GetRecord() const;

                    /**
                     * 设置是否录音，0表示不录音，1表示录音。默认为不录音，注意如果需要录音回调，通话完成后需要等待一段时间，收到录音回调之后，再解绑中间号。
                     * @param _record 是否录音，0表示不录音，1表示录音。默认为不录音，注意如果需要录音回调，通话完成后需要等待一段时间，收到录音回调之后，再解绑中间号。
                     * 
                     */
                    void SetRecord(const std::string& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取主被叫显号号码归属地，指定该参数说明显号归属该城市，如果没有该城市号码会随机选取一个城市或者后台配置返回107，返回码详见 《腾讯-中间号-城市id.xlsx》
                     * @return CityId 主被叫显号号码归属地，指定该参数说明显号归属该城市，如果没有该城市号码会随机选取一个城市或者后台配置返回107，返回码详见 《腾讯-中间号-城市id.xlsx》
                     * 
                     */
                    std::string GetCityId() const;

                    /**
                     * 设置主被叫显号号码归属地，指定该参数说明显号归属该城市，如果没有该城市号码会随机选取一个城市或者后台配置返回107，返回码详见 《腾讯-中间号-城市id.xlsx》
                     * @param _cityId 主被叫显号号码归属地，指定该参数说明显号归属该城市，如果没有该城市号码会随机选取一个城市或者后台配置返回107，返回码详见 《腾讯-中间号-城市id.xlsx》
                     * 
                     */
                    void SetCityId(const std::string& _cityId);

                    /**
                     * 判断参数 CityId 是否已赋值
                     * @return CityId 是否已赋值
                     * 
                     */
                    bool CityIdHasBeenSet() const;

                    /**
                     * 获取应用二级业务 ID，bizId 需保证在该 appId 下全局唯一，最大长度不超过 16 个字节。
                     * @return BizId 应用二级业务 ID，bizId 需保证在该 appId 下全局唯一，最大长度不超过 16 个字节。
                     * 
                     */
                    std::string GetBizId() const;

                    /**
                     * 设置应用二级业务 ID，bizId 需保证在该 appId 下全局唯一，最大长度不超过 16 个字节。
                     * @param _bizId 应用二级业务 ID，bizId 需保证在该 appId 下全局唯一，最大长度不超过 16 个字节。
                     * 
                     */
                    void SetBizId(const std::string& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取号码最大绑定时间，不填默认为 24 小时，最长绑定时间是168小时，单位秒
                     * @return MaxAssignTime 号码最大绑定时间，不填默认为 24 小时，最长绑定时间是168小时，单位秒
                     * 
                     */
                    std::string GetMaxAssignTime() const;

                    /**
                     * 设置号码最大绑定时间，不填默认为 24 小时，最长绑定时间是168小时，单位秒
                     * @param _maxAssignTime 号码最大绑定时间，不填默认为 24 小时，最长绑定时间是168小时，单位秒
                     * 
                     */
                    void SetMaxAssignTime(const std::string& _maxAssignTime);

                    /**
                     * 判断参数 MaxAssignTime 是否已赋值
                     * @return MaxAssignTime 是否已赋值
                     * 
                     */
                    bool MaxAssignTimeHasBeenSet() const;

                    /**
                     * 获取主叫发起呼叫状态：1
被叫发起呼叫状态：256
主叫响铃状态：2
被叫响铃状态：512
主叫接听状态：4
被叫接听状态：1024
主叫拒绝接听状态：8
被叫拒绝接听状态：2048
主叫正常挂机状态：16
被叫正常挂机状态：4096
主叫呼叫异常：32
被叫呼叫异常：8192

例如：
值为 0：表示所有状态不需要推送
值为 4：表示只要推送主叫接听状态
值为 16191：表示所有状态都需要推送（上面所有值和）
                     * @return StatusFlag 主叫发起呼叫状态：1
被叫发起呼叫状态：256
主叫响铃状态：2
被叫响铃状态：512
主叫接听状态：4
被叫接听状态：1024
主叫拒绝接听状态：8
被叫拒绝接听状态：2048
主叫正常挂机状态：16
被叫正常挂机状态：4096
主叫呼叫异常：32
被叫呼叫异常：8192

例如：
值为 0：表示所有状态不需要推送
值为 4：表示只要推送主叫接听状态
值为 16191：表示所有状态都需要推送（上面所有值和）
                     * 
                     */
                    std::string GetStatusFlag() const;

                    /**
                     * 设置主叫发起呼叫状态：1
被叫发起呼叫状态：256
主叫响铃状态：2
被叫响铃状态：512
主叫接听状态：4
被叫接听状态：1024
主叫拒绝接听状态：8
被叫拒绝接听状态：2048
主叫正常挂机状态：16
被叫正常挂机状态：4096
主叫呼叫异常：32
被叫呼叫异常：8192

例如：
值为 0：表示所有状态不需要推送
值为 4：表示只要推送主叫接听状态
值为 16191：表示所有状态都需要推送（上面所有值和）
                     * @param _statusFlag 主叫发起呼叫状态：1
被叫发起呼叫状态：256
主叫响铃状态：2
被叫响铃状态：512
主叫接听状态：4
被叫接听状态：1024
主叫拒绝接听状态：8
被叫拒绝接听状态：2048
主叫正常挂机状态：16
被叫正常挂机状态：4096
主叫呼叫异常：32
被叫呼叫异常：8192

例如：
值为 0：表示所有状态不需要推送
值为 4：表示只要推送主叫接听状态
值为 16191：表示所有状态都需要推送（上面所有值和）
                     * 
                     */
                    void SetStatusFlag(const std::string& _statusFlag);

                    /**
                     * 判断参数 StatusFlag 是否已赋值
                     * @return StatusFlag 是否已赋值
                     * 
                     */
                    bool StatusFlagHasBeenSet() const;

                    /**
                     * 获取请填写statusFlag并设置值，状态回调通知地址，正式环境可以配置默认推送地址
                     * @return StatusUrl 请填写statusFlag并设置值，状态回调通知地址，正式环境可以配置默认推送地址
                     * 
                     */
                    std::string GetStatusUrl() const;

                    /**
                     * 设置请填写statusFlag并设置值，状态回调通知地址，正式环境可以配置默认推送地址
                     * @param _statusUrl 请填写statusFlag并设置值，状态回调通知地址，正式环境可以配置默认推送地址
                     * 
                     */
                    void SetStatusUrl(const std::string& _statusUrl);

                    /**
                     * 判断参数 StatusUrl 是否已赋值
                     * @return StatusUrl 是否已赋值
                     * 
                     */
                    bool StatusUrlHasBeenSet() const;

                    /**
                     * 获取话单回调通知地址，正式环境可以配置默认推送地址
                     * @return HangupUrl 话单回调通知地址，正式环境可以配置默认推送地址
                     * 
                     */
                    std::string GetHangupUrl() const;

                    /**
                     * 设置话单回调通知地址，正式环境可以配置默认推送地址
                     * @param _hangupUrl 话单回调通知地址，正式环境可以配置默认推送地址
                     * 
                     */
                    void SetHangupUrl(const std::string& _hangupUrl);

                    /**
                     * 判断参数 HangupUrl 是否已赋值
                     * @return HangupUrl 是否已赋值
                     * 
                     */
                    bool HangupUrlHasBeenSet() const;

                    /**
                     * 获取录单 URL 回调通知地址，正式环境可以配置默认推送地址
                     * @return RecordUrl 录单 URL 回调通知地址，正式环境可以配置默认推送地址
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置录单 URL 回调通知地址，正式环境可以配置默认推送地址
                     * @param _recordUrl 录单 URL 回调通知地址，正式环境可以配置默认推送地址
                     * 
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                private:

                    /**
                     * 业务appid
                     */
                    std::string m_bizAppId;
                    bool m_bizAppIdHasBeenSet;

                    /**
                     * 被叫号码(号码前加 0086，如 008613631686024)
                     */
                    std::string m_dst;
                    bool m_dstHasBeenSet;

                    /**
                     * 主叫号码(号码前加 0086，如 008613631686024)，xb 模式下是不用填写，axb 模式下是必选
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * {“accreditList”:[“008613631686024”,”008612345678910”]}，主要用于 N-1 场景，号码绑定非共享是独占型，指定了 dst 独占中间号绑定，accreditList 表示这个列表成员可以拨打 dst 绑 定的中间号，默认值为空，表示所有号码都可以拨打独占型中间号绑定，最大集合不允许超过 30 个，仅适用于xb模式
                     */
                    std::vector<std::string> m_accreditList;
                    bool m_accreditListHasBeenSet;

                    /**
                     * 指定中间号（格式：008617013541251），如果该中间号已被使用则返回绑定失败。如果不带该字段则由腾讯侧从号码池里自动分配
                     */
                    std::string m_assignVirtualNum;
                    bool m_assignVirtualNumHasBeenSet;

                    /**
                     * 是否录音，0表示不录音，1表示录音。默认为不录音，注意如果需要录音回调，通话完成后需要等待一段时间，收到录音回调之后，再解绑中间号。
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * 主被叫显号号码归属地，指定该参数说明显号归属该城市，如果没有该城市号码会随机选取一个城市或者后台配置返回107，返回码详见 《腾讯-中间号-城市id.xlsx》
                     */
                    std::string m_cityId;
                    bool m_cityIdHasBeenSet;

                    /**
                     * 应用二级业务 ID，bizId 需保证在该 appId 下全局唯一，最大长度不超过 16 个字节。
                     */
                    std::string m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 号码最大绑定时间，不填默认为 24 小时，最长绑定时间是168小时，单位秒
                     */
                    std::string m_maxAssignTime;
                    bool m_maxAssignTimeHasBeenSet;

                    /**
                     * 主叫发起呼叫状态：1
被叫发起呼叫状态：256
主叫响铃状态：2
被叫响铃状态：512
主叫接听状态：4
被叫接听状态：1024
主叫拒绝接听状态：8
被叫拒绝接听状态：2048
主叫正常挂机状态：16
被叫正常挂机状态：4096
主叫呼叫异常：32
被叫呼叫异常：8192

例如：
值为 0：表示所有状态不需要推送
值为 4：表示只要推送主叫接听状态
值为 16191：表示所有状态都需要推送（上面所有值和）
                     */
                    std::string m_statusFlag;
                    bool m_statusFlagHasBeenSet;

                    /**
                     * 请填写statusFlag并设置值，状态回调通知地址，正式环境可以配置默认推送地址
                     */
                    std::string m_statusUrl;
                    bool m_statusUrlHasBeenSet;

                    /**
                     * 话单回调通知地址，正式环境可以配置默认推送地址
                     */
                    std::string m_hangupUrl;
                    bool m_hangupUrlHasBeenSet;

                    /**
                     * 录单 URL 回调通知地址，正式环境可以配置默认推送地址
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_GETVIRTUALNUMREQUEST_H_
