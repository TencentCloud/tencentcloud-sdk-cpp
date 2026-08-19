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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSEBINDTASKDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSEBINDTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
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
                     * 获取<p>云服务器UUID</p>
                     * @return Quuid <p>云服务器UUID</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>云服务器UUID</p>
                     * @param _quuid <p>云服务器UUID</p>
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
                     * 获取<p>错误信息</p>
                     * @return ErrMsg <p>错误信息</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _errMsg <p>错误信息</p>
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
                     * 获取<p>0 执行中, 1 成功,2失败</p>
                     * @return Status <p>0 执行中, 1 成功,2失败</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>0 执行中, 1 成功,2失败</p>
                     * @param _status <p>0 执行中, 1 成功,2失败</p>
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
                     * 获取<p>修复建议</p>
                     * @return FixMessage <p>修复建议</p>
                     * 
                     */
                    std::string GetFixMessage() const;

                    /**
                     * 设置<p>修复建议</p>
                     * @param _fixMessage <p>修复建议</p>
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
                     * 获取<p>机器额外信息</p>
                     * @return MachineExtraInfo <p>机器额外信息</p>
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置<p>机器额外信息</p>
                     * @param _machineExtraInfo <p>机器额外信息</p>
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
                     * <p>云服务器UUID</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>0 执行中, 1 成功,2失败</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>修复建议</p>
                     */
                    std::string m_fixMessage;
                    bool m_fixMessageHasBeenSet;

                    /**
                     * <p>机器额外信息</p>
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSEBINDTASKDETAIL_H_
