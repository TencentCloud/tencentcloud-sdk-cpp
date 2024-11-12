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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEFIX_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEFIX_H_

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
                * 基线密码修复
                */
                class BaselineFix : public AbstractModel
                {
                public:
                    BaselineFix();
                    ~BaselineFix() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取修复项名称
                     * @return ItemName 修复项名称
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置修复项名称
                     * @param _itemName 修复项名称
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取主机Ip
                     * @return HostIp 主机Ip
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机Ip
                     * @param _hostIp 主机Ip
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取首次检测时间
                     * @return CreateTime 首次检测时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次检测时间
                     * @param _createTime 首次检测时间
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
                     * 获取最后检测时间
                     * @return ModifyTime 最后检测时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最后检测时间
                     * @param _modifyTime 最后检测时间
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
                     * 获取修复时间
                     * @return FixTime 修复时间
                     * 
                     */
                    std::string GetFixTime() const;

                    /**
                     * 设置修复时间
                     * @param _fixTime 修复时间
                     * 
                     */
                    void SetFixTime(const std::string& _fixTime);

                    /**
                     * 判断参数 FixTime 是否已赋值
                     * @return FixTime 是否已赋值
                     * 
                     */
                    bool FixTimeHasBeenSet() const;

                    /**
                     * 获取基线检测项结果ID
                     * @return Id 基线检测项结果ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置基线检测项结果ID
                     * @param _id 基线检测项结果ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取主机额外信息
                     * @return MachineExtraInfo 主机额外信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置主机额外信息
                     * @param _machineExtraInfo 主机额外信息
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
                     * 修复项名称
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * 主机Ip
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 首次检测时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后检测时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 修复时间
                     */
                    std::string m_fixTime;
                    bool m_fixTimeHasBeenSet;

                    /**
                     * 基线检测项结果ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEFIX_H_
