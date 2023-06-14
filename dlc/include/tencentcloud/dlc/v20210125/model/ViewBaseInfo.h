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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_VIEWBASEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_VIEWBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 视图基本配置信息
                */
                class ViewBaseInfo : public AbstractModel
                {
                public:
                    ViewBaseInfo();
                    ~ViewBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该视图所属数据库名字
                     * @return DatabaseName 该视图所属数据库名字
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置该视图所属数据库名字
                     * @param _databaseName 该视图所属数据库名字
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取视图名称
                     * @return ViewName 视图名称
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置视图名称
                     * @param _viewName 视图名称
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取视图创建人昵称
                     * @return UserAlias 视图创建人昵称
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置视图创建人昵称
                     * @param _userAlias 视图创建人昵称
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取视图创建人ID
                     * @return UserSubUin 视图创建人ID
                     * 
                     */
                    std::string GetUserSubUin() const;

                    /**
                     * 设置视图创建人ID
                     * @param _userSubUin 视图创建人ID
                     * 
                     */
                    void SetUserSubUin(const std::string& _userSubUin);

                    /**
                     * 判断参数 UserSubUin 是否已赋值
                     * @return UserSubUin 是否已赋值
                     * 
                     */
                    bool UserSubUinHasBeenSet() const;

                private:

                    /**
                     * 该视图所属数据库名字
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 视图名称
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 视图创建人昵称
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * 视图创建人ID
                     */
                    std::string m_userSubUin;
                    bool m_userSubUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_VIEWBASEINFO_H_
