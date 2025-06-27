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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYMANAGE_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYMANAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 后台详情
                */
                class DisplayManage : public AbstractModel
                {
                public:
                    DisplayManage();
                    ~DisplayManage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键ID
                     * @return Id 主键ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键ID
                     * @param _id 主键ID
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
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取Url
                     * @return Url Url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Url
                     * @param _url Url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取标题
                     * @return Title 标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题
                     * @param _title 标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Icon
                     * @return Icon Icon
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置Icon
                     * @param _icon Icon
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取缩略图
                     * @return Screenshot 缩略图
                     * 
                     */
                    std::string GetScreenshot() const;

                    /**
                     * 设置缩略图
                     * @param _screenshot 缩略图
                     * 
                     */
                    void SetScreenshot(const std::string& _screenshot);

                    /**
                     * 判断参数 Screenshot 是否已赋值
                     * @return Screenshot 是否已赋值
                     * 
                     */
                    bool ScreenshotHasBeenSet() const;

                    /**
                     * 获取状态码
                     * @return Code 状态码
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置状态码
                     * @param _code 状态码
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取后台Host
                     * @return Host 后台Host
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置后台Host
                     * @param _host 后台Host
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取状态：not_converged:未收敛, converged:已收敛, ignore:已忽略

                     * @return Status 状态：not_converged:未收敛, converged:已收敛, ignore:已忽略

                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：not_converged:未收敛, converged:已收敛, ignore:已忽略

                     * @param _status 状态：not_converged:未收敛, converged:已收敛, ignore:已忽略

                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * Url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Icon
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 缩略图
                     */
                    std::string m_screenshot;
                    bool m_screenshotHasBeenSet;

                    /**
                     * 状态码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 后台Host
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 状态：not_converged:未收敛, converged:已收敛, ignore:已忽略

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYMANAGE_H_
