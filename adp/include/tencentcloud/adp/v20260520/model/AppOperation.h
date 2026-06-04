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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPOPERATION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 应用操作信息
                */
                class AppOperation : public AbstractModel
                {
                public:
                    AppOperation();
                    ~AppOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建人
                     * @return Creator 创建人
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
                     * @param _creator 创建人
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取创建人UIN
                     * @return CreatorUin 创建人UIN
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置创建人UIN
                     * @param _creatorUin 创建人UIN
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取创建人账号(私有化场景使用)
                     * @return CreatorUserAccount 创建人账号(私有化场景使用)
                     * 
                     */
                    std::string GetCreatorUserAccount() const;

                    /**
                     * 设置创建人账号(私有化场景使用)
                     * @param _creatorUserAccount 创建人账号(私有化场景使用)
                     * 
                     */
                    void SetCreatorUserAccount(const std::string& _creatorUserAccount);

                    /**
                     * 判断参数 CreatorUserAccount 是否已赋值
                     * @return CreatorUserAccount 是否已赋值
                     * 
                     */
                    bool CreatorUserAccountHasBeenSet() const;

                    /**
                     * 获取修改时间 (Unix时间戳,秒级)
                     * @return UpdateTime 修改时间 (Unix时间戳,秒级)
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间 (Unix时间戳,秒级)
                     * @param _updateTime 修改时间 (Unix时间戳,秒级)
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取最后修改人
                     * @return Updater 最后修改人
                     * 
                     */
                    std::string GetUpdater() const;

                    /**
                     * 设置最后修改人
                     * @param _updater 最后修改人
                     * 
                     */
                    void SetUpdater(const std::string& _updater);

                    /**
                     * 判断参数 Updater 是否已赋值
                     * @return Updater 是否已赋值
                     * 
                     */
                    bool UpdaterHasBeenSet() const;

                    /**
                     * 获取修改人UIN
                     * @return UpdaterUin 修改人UIN
                     * 
                     */
                    std::string GetUpdaterUin() const;

                    /**
                     * 设置修改人UIN
                     * @param _updaterUin 修改人UIN
                     * 
                     */
                    void SetUpdaterUin(const std::string& _updaterUin);

                    /**
                     * 判断参数 UpdaterUin 是否已赋值
                     * @return UpdaterUin 是否已赋值
                     * 
                     */
                    bool UpdaterUinHasBeenSet() const;

                private:

                    /**
                     * 创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 创建人UIN
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 创建人账号(私有化场景使用)
                     */
                    std::string m_creatorUserAccount;
                    bool m_creatorUserAccountHasBeenSet;

                    /**
                     * 修改时间 (Unix时间戳,秒级)
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 最后修改人
                     */
                    std::string m_updater;
                    bool m_updaterHasBeenSet;

                    /**
                     * 修改人UIN
                     */
                    std::string m_updaterUin;
                    bool m_updaterUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPOPERATION_H_
