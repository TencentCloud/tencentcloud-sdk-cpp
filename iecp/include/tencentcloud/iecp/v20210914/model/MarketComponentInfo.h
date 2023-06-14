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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_MARKETCOMPONENTINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_MARKETCOMPONENTINFO_H_

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
                * 组件市场的组件描述
                */
                class MarketComponentInfo : public AbstractModel
                {
                public:
                    MarketComponentInfo();
                    ~MarketComponentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件ID
                     * @return ID 组件ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置组件ID
                     * @param _iD 组件ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取组件名称
                     * @return AppName 组件名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置组件名称
                     * @param _appName 组件名称
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取发布者
                     * @return Author 发布者
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置发布者
                     * @param _author 发布者
                     * 
                     */
                    void SetAuthor(const std::string& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取发布时间
                     * @return ReleaseTime 发布时间
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置发布时间
                     * @param _releaseTime 发布时间
                     * 
                     */
                    void SetReleaseTime(const std::string& _releaseTime);

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

                    /**
                     * 获取组件简介
                     * @return Outline 组件简介
                     * 
                     */
                    std::string GetOutline() const;

                    /**
                     * 设置组件简介
                     * @param _outline 组件简介
                     * 
                     */
                    void SetOutline(const std::string& _outline);

                    /**
                     * 判断参数 Outline 是否已赋值
                     * @return Outline 是否已赋值
                     * 
                     */
                    bool OutlineHasBeenSet() const;

                    /**
                     * 获取指向详细描述的url
                     * @return Detail 指向详细描述的url
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置指向详细描述的url
                     * @param _detail 指向详细描述的url
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取图标链接
                     * @return Icon 图标链接
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置图标链接
                     * @param _icon 图标链接
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
                     * 获取组件版本
                     * @return Version 组件版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置组件版本
                     * @param _version 组件版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取组件可视化信息
                     * @return WorkloadVisualConfig 组件可视化信息
                     * 
                     */
                    std::string GetWorkloadVisualConfig() const;

                    /**
                     * 设置组件可视化信息
                     * @param _workloadVisualConfig 组件可视化信息
                     * 
                     */
                    void SetWorkloadVisualConfig(const std::string& _workloadVisualConfig);

                    /**
                     * 判断参数 WorkloadVisualConfig 是否已赋值
                     * @return WorkloadVisualConfig 是否已赋值
                     * 
                     */
                    bool WorkloadVisualConfigHasBeenSet() const;

                    /**
                     * 获取无
                     * @return DetailUrl 无
                     * 
                     */
                    std::string GetDetailUrl() const;

                    /**
                     * 设置无
                     * @param _detailUrl 无
                     * 
                     */
                    void SetDetailUrl(const std::string& _detailUrl);

                    /**
                     * 判断参数 DetailUrl 是否已赋值
                     * @return DetailUrl 是否已赋值
                     * 
                     */
                    bool DetailUrlHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Installed 无
                     * 
                     */
                    bool GetInstalled() const;

                    /**
                     * 设置无
                     * @param _installed 无
                     * 
                     */
                    void SetInstalled(const bool& _installed);

                    /**
                     * 判断参数 Installed 是否已赋值
                     * @return Installed 是否已赋值
                     * 
                     */
                    bool InstalledHasBeenSet() const;

                private:

                    /**
                     * 组件ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 组件名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 发布者
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * 发布时间
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * 组件简介
                     */
                    std::string m_outline;
                    bool m_outlineHasBeenSet;

                    /**
                     * 指向详细描述的url
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 图标链接
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 组件版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 组件可视化信息
                     */
                    std::string m_workloadVisualConfig;
                    bool m_workloadVisualConfigHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_detailUrl;
                    bool m_detailUrlHasBeenSet;

                    /**
                     * 无
                     */
                    bool m_installed;
                    bool m_installedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_MARKETCOMPONENTINFO_H_
