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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BANWHITELIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BANWHITELIST_H_

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
                * 阻断白名单规则
                */
                class BanWhiteList : public AbstractModel
                {
                public:
                    BanWhiteList();
                    ~BanWhiteList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取白名单ID。
                     * @return Id 白名单ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置白名单ID。
                     * @param _id 白名单ID。
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
                     * 获取白名单别名。
                     * @return Remark 白名单别名。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置白名单别名。
                     * @param _remark 白名单别名。
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
                     * 获取阻断来源IP。
                     * @return SrcIp 阻断来源IP。
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置阻断来源IP。
                     * @param _srcIp 阻断来源IP。
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
                     * 获取修改白名单时间。
                     * @return ModifyTime 修改白名单时间。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改白名单时间。
                     * @param _modifyTime 修改白名单时间。
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
                     * 获取创建白名单时间。
                     * @return CreateTime 创建白名单时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建白名单时间。
                     * @param _createTime 创建白名单时间。
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
                     * 获取白名单所属机器。
                     * @return Uuid 白名单所属机器。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置白名单所属机器。
                     * @param _uuid 白名单所属机器。
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
                     * 获取白名单所属机器列表
                     * @return Quuids 白名单所属机器列表
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置白名单所属机器列表
                     * @param _quuids 白名单所属机器列表
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                private:

                    /**
                     * 白名单ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 白名单别名。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 阻断来源IP。
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 修改白名单时间。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 创建白名单时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 白名单所属机器。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 白名单是否全局
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 白名单所属机器列表
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BANWHITELIST_H_
