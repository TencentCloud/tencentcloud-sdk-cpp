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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_PHASEDATA_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_PHASEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 环节数据
                */
                class PhaseData : public AbstractModel
                {
                public:
                    PhaseData();
                    ~PhaseData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取启用头
                     * @return HeadEnabled 启用头
                     * 
                     */
                    bool GetHeadEnabled() const;

                    /**
                     * 设置启用头
                     * @param _headEnabled 启用头
                     * 
                     */
                    void SetHeadEnabled(const bool& _headEnabled);

                    /**
                     * 判断参数 HeadEnabled 是否已赋值
                     * @return HeadEnabled 是否已赋值
                     * 
                     */
                    bool HeadEnabledHasBeenSet() const;

                    /**
                     * 获取标题
                     * @return HeadTitle 标题
                     * 
                     */
                    std::string GetHeadTitle() const;

                    /**
                     * 设置标题
                     * @param _headTitle 标题
                     * 
                     */
                    void SetHeadTitle(const std::string& _headTitle);

                    /**
                     * 判断参数 HeadTitle 是否已赋值
                     * @return HeadTitle 是否已赋值
                     * 
                     */
                    bool HeadTitleHasBeenSet() const;

                    /**
                     * 获取标识符
                     * @return Key 标识符
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置标识符
                     * @param _key 标识符
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取小程序AppId
                     * @return AppId 小程序AppId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置小程序AppId
                     * @param _appId 小程序AppId
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取小程序AppPath
                     * @return AppPath 小程序AppPath
                     * 
                     */
                    std::string GetAppPath() const;

                    /**
                     * 设置小程序AppPath
                     * @param _appPath 小程序AppPath
                     * 
                     */
                    void SetAppPath(const std::string& _appPath);

                    /**
                     * 判断参数 AppPath 是否已赋值
                     * @return AppPath 是否已赋值
                     * 
                     */
                    bool AppPathHasBeenSet() const;

                    /**
                     * 获取小程序名称AppName
                     * @return AppName 小程序名称AppName
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置小程序名称AppName
                     * @param _appName 小程序名称AppName
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                private:

                    /**
                     * 启用头
                     */
                    bool m_headEnabled;
                    bool m_headEnabledHasBeenSet;

                    /**
                     * 标题
                     */
                    std::string m_headTitle;
                    bool m_headTitleHasBeenSet;

                    /**
                     * 标识符
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 小程序AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 小程序AppPath
                     */
                    std::string m_appPath;
                    bool m_appPathHasBeenSet;

                    /**
                     * 小程序名称AppName
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_PHASEDATA_H_
