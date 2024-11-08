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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_CMDTEMPLATE_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_CMDTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 高危命令模板
                */
                class CmdTemplate : public AbstractModel
                {
                public:
                    CmdTemplate();
                    ~CmdTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高危命令模板ID
                     * @return Id 高危命令模板ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置高危命令模板ID
                     * @param _id 高危命令模板ID
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
                     * 获取高危命令模板名称
                     * @return Name 高危命令模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置高危命令模板名称
                     * @param _name 高危命令模板名称
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
                     * 获取命令列表，命令之间用换行符（"\n"）分隔
                     * @return CmdList 命令列表，命令之间用换行符（"\n"）分隔
                     * 
                     */
                    std::string GetCmdList() const;

                    /**
                     * 设置命令列表，命令之间用换行符（"\n"）分隔
                     * @param _cmdList 命令列表，命令之间用换行符（"\n"）分隔
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
                     * 获取命令模板类型 1-内置 2-自定义	
                     * @return Type 命令模板类型 1-内置 2-自定义	
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置命令模板类型 1-内置 2-自定义	
                     * @param _type 命令模板类型 1-内置 2-自定义	
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
                     * 高危命令模板ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 高危命令模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命令列表，命令之间用换行符（"\n"）分隔
                     */
                    std::string m_cmdList;
                    bool m_cmdListHasBeenSet;

                    /**
                     * 命令模板类型 1-内置 2-自定义	
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_CMDTEMPLATE_H_
