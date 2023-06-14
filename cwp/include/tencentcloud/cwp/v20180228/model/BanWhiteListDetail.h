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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BANWHITELISTDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BANWHITELISTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 阻断白名单展示列表，包含了机器的信息
                */
                class BanWhiteListDetail : public AbstractModel
                {
                public:
                    BanWhiteListDetail();
                    ~BanWhiteListDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取白名单ID
                     * @return Id 白名单ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置白名单ID
                     * @param _id 白名单ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取白名单别名
                     * @return Remark 白名单别名
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置白名单别名
                     * @param _remark 白名单别名
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
                     * 获取阻断来源IP
                     * @return SrcIp 阻断来源IP
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置阻断来源IP
                     * @param _srcIp 阻断来源IP
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取修改白名单时间
                     * @return ModifyTime 修改白名单时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改白名单时间
                     * @param _modifyTime 修改白名单时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取创建白名单时间
                     * @return CreateTime 创建白名单时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建白名单时间
                     * @param _createTime 创建白名单时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取白名单是否全局
                     * @return IsGlobal 白名单是否全局
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置白名单是否全局
                     * @param _isGlobal 白名单是否全局
                     * 
                     */
                    void SetIsGlobal(const bool& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取机器的UUID
                     * @return Quuid 机器的UUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置机器的UUID
                     * @param _quuid 机器的UUID
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
                     * 获取主机安全程序的UUID
                     * @return Uuid 主机安全程序的UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全程序的UUID
                     * @param _uuid 主机安全程序的UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取机器IP
                     * @return MachineIp 机器IP
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置机器IP
                     * @param _machineIp 机器IP
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取机器名称
                     * @return MachineName 机器名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置机器名称
                     * @param _machineName 机器名称
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                private:

                    /**
                     * 白名单ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 白名单别名
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 阻断来源IP
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 修改白名单时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 创建白名单时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 白名单是否全局
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 机器的UUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机安全程序的UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 机器IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 机器名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BANWHITELISTDETAIL_H_
