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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_USERCMD_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_USERCMD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 脚本信息
                */
                class UserCmd : public AbstractModel
                {
                public:
                    UserCmd();
                    ~UserCmd() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户自定义脚本名
                     * @return Alias 用户自定义脚本名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置用户自定义脚本名
                     * @param _alias 用户自定义脚本名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取AppId
                     * @return AppId AppId
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置AppId
                     * @param _appId AppId
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取脚本自增ID
                     * @return AutoId 脚本自增ID
                     * 
                     */
                    uint64_t GetAutoId() const;

                    /**
                     * 设置脚本自增ID
                     * @param _autoId 脚本自增ID
                     * 
                     */
                    void SetAutoId(const uint64_t& _autoId);

                    /**
                     * 判断参数 AutoId 是否已赋值
                     * @return AutoId 是否已赋值
                     * 
                     */
                    bool AutoIdHasBeenSet() const;

                    /**
                     * 获取脚本ID
                     * @return CmdId 脚本ID
                     * 
                     */
                    std::string GetCmdId() const;

                    /**
                     * 设置脚本ID
                     * @param _cmdId 脚本ID
                     * 
                     */
                    void SetCmdId(const std::string& _cmdId);

                    /**
                     * 判断参数 CmdId 是否已赋值
                     * @return CmdId 是否已赋值
                     * 
                     */
                    bool CmdIdHasBeenSet() const;

                    /**
                     * 获取脚本内容
                     * @return Content 脚本内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置脚本内容
                     * @param _content 脚本内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

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
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
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
                     * 获取命令适用的操作系统类型
                     * @return OsType 命令适用的操作系统类型
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置命令适用的操作系统类型
                     * @param _osType 命令适用的操作系统类型
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                private:

                    /**
                     * 用户自定义脚本名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * AppId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 脚本自增ID
                     */
                    uint64_t m_autoId;
                    bool m_autoIdHasBeenSet;

                    /**
                     * 脚本ID
                     */
                    std::string m_cmdId;
                    bool m_cmdIdHasBeenSet;

                    /**
                     * 脚本内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 命令适用的操作系统类型
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_USERCMD_H_
