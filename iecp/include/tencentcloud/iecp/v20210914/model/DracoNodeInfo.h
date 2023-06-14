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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DRACONODEINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DRACONODEINFO_H_

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
                * Draco 设备预录入信息
                */
                class DracoNodeInfo : public AbstractModel
                {
                public:
                    DracoNodeInfo();
                    ~DracoNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备SN。SN仅支持大写字母、数字，长度限制为1~32个字符
                     * @return SN 设备SN。SN仅支持大写字母、数字，长度限制为1~32个字符
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置设备SN。SN仅支持大写字母、数字，长度限制为1~32个字符
                     * @param _sN 设备SN。SN仅支持大写字母、数字，长度限制为1~32个字符
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                    /**
                     * 获取节点名称。长度限制为1~63个字符，节点名称只支持小写英文、数字、中横线、英文句号
                     * @return Name 节点名称。长度限制为1~63个字符，节点名称只支持小写英文、数字、中横线、英文句号
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点名称。长度限制为1~63个字符，节点名称只支持小写英文、数字、中横线、英文句号
                     * @param _name 节点名称。长度限制为1~63个字符，节点名称只支持小写英文、数字、中横线、英文句号
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
                     * 获取节点备注
                     * @return Remark 节点备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置节点备注
                     * @param _remark 节点备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 设备SN。SN仅支持大写字母、数字，长度限制为1~32个字符
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * 节点名称。长度限制为1~63个字符，节点名称只支持小写英文、数字、中横线、英文句号
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 节点备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DRACONODEINFO_H_
