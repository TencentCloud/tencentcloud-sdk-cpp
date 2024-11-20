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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYCMDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYCMDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyCmdTemplate请求参数结构体
                */
                class ModifyCmdTemplateRequest : public AbstractModel
                {
                public:
                    ModifyCmdTemplateRequest();
                    ~ModifyCmdTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板名，最长32字符，不能包含空白字符
                     * @return Name 模板名，最长32字符，不能包含空白字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名，最长32字符，不能包含空白字符
                     * @param _name 模板名，最长32字符，不能包含空白字符
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
                     * 获取命令列表，\n分隔，最长32768字节
                     * @return CmdList 命令列表，\n分隔，最长32768字节
                     * 
                     */
                    std::string GetCmdList() const;

                    /**
                     * 设置命令列表，\n分隔，最长32768字节
                     * @param _cmdList 命令列表，\n分隔，最长32768字节
                     * 
                     */
                    void SetCmdList(const std::string& _cmdList);

                    /**
                     * 判断参数 CmdList 是否已赋值
                     * @return CmdList 是否已赋值
                     * 
                     */
                    bool CmdListHasBeenSet() const;

                    /**
                     * 获取命令模板ID
                     * @return Id 命令模板ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置命令模板ID
                     * @param _id 命令模板ID
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
                     * 获取CmdList字段前端是否base64传值。
0：否，1：是
                     * @return Encoding CmdList字段前端是否base64传值。
0：否，1：是
                     * 
                     */
                    uint64_t GetEncoding() const;

                    /**
                     * 设置CmdList字段前端是否base64传值。
0：否，1：是
                     * @param _encoding CmdList字段前端是否base64传值。
0：否，1：是
                     * 
                     */
                    void SetEncoding(const uint64_t& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取命令模板类型 1-内置模板 2-自定义模板
                     * @return Type 命令模板类型 1-内置模板 2-自定义模板
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置命令模板类型 1-内置模板 2-自定义模板
                     * @param _type 命令模板类型 1-内置模板 2-自定义模板
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 模板名，最长32字符，不能包含空白字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命令列表，\n分隔，最长32768字节
                     */
                    std::string m_cmdList;
                    bool m_cmdListHasBeenSet;

                    /**
                     * 命令模板ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CmdList字段前端是否base64传值。
0：否，1：是
                     */
                    uint64_t m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * 命令模板类型 1-内置模板 2-自定义模板
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYCMDTEMPLATEREQUEST_H_
