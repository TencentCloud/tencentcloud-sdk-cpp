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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEBINDTASKDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEBINDTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 授权绑定任务详情
                */
                class LicenseBindTaskDetail : public AbstractModel
                {
                public:
                    LicenseBindTaskDetail();
                    ~LicenseBindTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云服务器UUID
                     * @return Quuid 云服务器UUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置云服务器UUID
                     * @param _quuid 云服务器UUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrMsg 错误信息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置错误信息
                     * @param _errMsg 错误信息
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
                     * 获取0 执行中, 1 成功,2失败
                     * @return Status 0 执行中, 1 成功,2失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0 执行中, 1 成功,2失败
                     * @param _status 0 执行中, 1 成功,2失败
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取修复建议
                     * @return FixMessage 修复建议
                     * 
                     */
                    std::string GetFixMessage() const;

                    /**
                     * 设置修复建议
                     * @param _fixMessage 修复建议
                     * 
                     */
                    void SetFixMessage(const std::string& _fixMessage);

                    /**
                     * 判断参数 FixMessage 是否已赋值
                     * @return FixMessage 是否已赋值
                     * 
                     */
                    bool FixMessageHasBeenSet() const;

                    /**
                     * 获取机器额外信息
                     * @return MachineExtraInfo 机器额外信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置机器额外信息
                     * @param _machineExtraInfo 机器额外信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 云服务器UUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 0 执行中, 1 成功,2失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 修复建议
                     */
                    std::string m_fixMessage;
                    bool m_fixMessageHasBeenSet;

                    /**
                     * 机器额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEBINDTASKDETAIL_H_
