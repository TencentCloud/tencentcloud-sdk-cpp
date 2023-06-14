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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_EDGEDRACONODEINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_EDGEDRACONODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 预注册节点的信息
                */
                class EdgeDracoNodeInfo : public AbstractModel
                {
                public:
                    EdgeDracoNodeInfo();
                    ~EdgeDracoNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点ID
                     * @return Id 节点ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置节点ID
                     * @param _id 节点ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return Name 节点名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点名称
                     * @param _name 节点名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取是否已激活
                     * @return IsUsed 是否已激活
                     * 
                     */
                    bool GetIsUsed() const;

                    /**
                     * 设置是否已激活
                     * @param _isUsed 是否已激活
                     * 
                     */
                    void SetIsUsed(const bool& _isUsed);

                    /**
                     * 判断参数 IsUsed 是否已赋值
                     * @return IsUsed 是否已赋值
                     * 
                     */
                    bool IsUsedHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取备注信息，如批次
                     * @return Remark 备注信息，如批次
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息，如批次
                     * @param _remark 备注信息，如批次
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
                     * 获取SN 设备号
                     * @return SN SN 设备号
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置SN 设备号
                     * @param _sN SN 设备号
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                private:

                    /**
                     * 节点ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否已激活
                     */
                    bool m_isUsed;
                    bool m_isUsedHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 备注信息，如批次
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * SN 设备号
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_EDGEDRACONODEINFO_H_
