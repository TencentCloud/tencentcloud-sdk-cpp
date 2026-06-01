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
                     * 获取<p>主键ID</p>
                     * @return Id <p>主键ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>主键ID</p>
                     * @param _id <p>主键ID</p>
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
                     * 获取<p>公共字段</p>
                     * @return DisplayToolCommon <p>公共字段</p>
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置<p>公共字段</p>
                     * @param _displayToolCommon <p>公共字段</p>
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
                     * 获取<p>Url</p>
                     * @return Url <p>Url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Url</p>
                     * @param _url <p>Url</p>
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
                     * 获取<p>标题</p>
                     * @return Title <p>标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>标题</p>
                     * @param _title <p>标题</p>
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
                     * 获取<p>Icon</p>
                     * @return Icon <p>Icon</p>
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置<p>Icon</p>
                     * @param _icon <p>Icon</p>
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
                     * 获取<p>缩略图</p>
                     * @return Screenshot <p>缩略图</p>
                     * 
                     */
                    std::string GetScreenshot() const;

                    /**
                     * 设置<p>缩略图</p>
                     * @param _screenshot <p>缩略图</p>
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
                     * 获取<p>状态码</p>
                     * @return Code <p>状态码</p>
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置<p>状态码</p>
                     * @param _code <p>状态码</p>
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
                     * 获取<p>后台Host</p>
                     * @return Host <p>后台Host</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>后台Host</p>
                     * @param _host <p>后台Host</p>
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
                     * 获取<p>状态：not_converged:未收敛, converged:已收敛, ignore:已忽略</p>
                     * @return Status <p>状态：not_converged:未收敛, converged:已收敛, ignore:已忽略</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态：not_converged:未收敛, converged:已收敛, ignore:已忽略</p>
                     * @param _status <p>状态：not_converged:未收敛, converged:已收敛, ignore:已忽略</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否为云资产：0-非云资产 1-是云资产</p>
                     * @return IsCloudAsset <p>是否为云资产：0-非云资产 1-是云资产</p>
                     * 
                     */
                    int64_t GetIsCloudAsset() const;

                    /**
                     * 设置<p>是否为云资产：0-非云资产 1-是云资产</p>
                     * @param _isCloudAsset <p>是否为云资产：0-非云资产 1-是云资产</p>
                     * 
                     */
                    void SetIsCloudAsset(const int64_t& _isCloudAsset);

                    /**
                     * 判断参数 IsCloudAsset 是否已赋值
                     * @return IsCloudAsset 是否已赋值
                     * 
                     */
                    bool IsCloudAssetHasBeenSet() const;

                    /**
                     * 获取<p>云资产是否下线：-1-已下线 0-正常</p>
                     * @return CloudAssetStatus <p>云资产是否下线：-1-已下线 0-正常</p>
                     * 
                     */
                    int64_t GetCloudAssetStatus() const;

                    /**
                     * 设置<p>云资产是否下线：-1-已下线 0-正常</p>
                     * @param _cloudAssetStatus <p>云资产是否下线：-1-已下线 0-正常</p>
                     * 
                     */
                    void SetCloudAssetStatus(const int64_t& _cloudAssetStatus);

                    /**
                     * 判断参数 CloudAssetStatus 是否已赋值
                     * @return CloudAssetStatus 是否已赋值
                     * 
                     */
                    bool CloudAssetStatusHasBeenSet() const;

                    /**
                     * 获取<p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * @return AggregationCount <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * 
                     */
                    int64_t GetAggregationCount() const;

                    /**
                     * 设置<p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * @param _aggregationCount <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * 
                     */
                    void SetAggregationCount(const int64_t& _aggregationCount);

                    /**
                     * 判断参数 AggregationCount 是否已赋值
                     * @return AggregationCount 是否已赋值
                     * 
                     */
                    bool AggregationCountHasBeenSet() const;

                private:

                    /**
                     * <p>主键ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>公共字段</p>
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * <p>Url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>Icon</p>
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * <p>缩略图</p>
                     */
                    std::string m_screenshot;
                    bool m_screenshotHasBeenSet;

                    /**
                     * <p>状态码</p>
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>后台Host</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>状态：not_converged:未收敛, converged:已收敛, ignore:已忽略</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否为云资产：0-非云资产 1-是云资产</p>
                     */
                    int64_t m_isCloudAsset;
                    bool m_isCloudAssetHasBeenSet;

                    /**
                     * <p>云资产是否下线：-1-已下线 0-正常</p>
                     */
                    int64_t m_cloudAssetStatus;
                    bool m_cloudAssetStatusHasBeenSet;

                    /**
                     * <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     */
                    int64_t m_aggregationCount;
                    bool m_aggregationCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYMANAGE_H_
