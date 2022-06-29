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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * RestoreMedia请求参数结构体
                */
                class RestoreMediaRequest : public AbstractModel
                {
                public:
                    RestoreMediaRequest();
                    ~RestoreMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体文件唯一标识列表。
                     * @return FileIds 媒体文件唯一标识列表。
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置媒体文件唯一标识列表。
                     * @param FileIds 媒体文件唯一标识列表。
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取解冻出的临时媒体文件的可访问持续时长，单位为“天”。
                     * @return RestoreDay 解冻出的临时媒体文件的可访问持续时长，单位为“天”。
                     */
                    uint64_t GetRestoreDay() const;

                    /**
                     * 设置解冻出的临时媒体文件的可访问持续时长，单位为“天”。
                     * @param RestoreDay 解冻出的临时媒体文件的可访问持续时长，单位为“天”。
                     */
                    void SetRestoreDay(const uint64_t& _restoreDay);

                    /**
                     * 判断参数 RestoreDay 是否已赋值
                     * @return RestoreDay 是否已赋值
                     */
                    bool RestoreDayHasBeenSet() const;

                    /**
                     * 获取解冻模式。当媒体文件当前的存储类型为归档存储时，有以下取值：
<li>极速模式：Expedited，解冻任务在5分钟后完成。</li>
<li>标准模式：Standard，解冻任务在5小时后完成 。</li>
<li>批量模式：Bulk，，解冻任务在12小时后完成。</li>
当媒体文件的存储类型为深度归档存储时，有以下取值：
<li>标准模式：Standard，解冻任务在24小时后完成。</li>
<li>批量模式：Bulk，解冻任务在48小时后完成。</li>
                     * @return RestoreTier 解冻模式。当媒体文件当前的存储类型为归档存储时，有以下取值：
<li>极速模式：Expedited，解冻任务在5分钟后完成。</li>
<li>标准模式：Standard，解冻任务在5小时后完成 。</li>
<li>批量模式：Bulk，，解冻任务在12小时后完成。</li>
当媒体文件的存储类型为深度归档存储时，有以下取值：
<li>标准模式：Standard，解冻任务在24小时后完成。</li>
<li>批量模式：Bulk，解冻任务在48小时后完成。</li>
                     */
                    std::string GetRestoreTier() const;

                    /**
                     * 设置解冻模式。当媒体文件当前的存储类型为归档存储时，有以下取值：
<li>极速模式：Expedited，解冻任务在5分钟后完成。</li>
<li>标准模式：Standard，解冻任务在5小时后完成 。</li>
<li>批量模式：Bulk，，解冻任务在12小时后完成。</li>
当媒体文件的存储类型为深度归档存储时，有以下取值：
<li>标准模式：Standard，解冻任务在24小时后完成。</li>
<li>批量模式：Bulk，解冻任务在48小时后完成。</li>
                     * @param RestoreTier 解冻模式。当媒体文件当前的存储类型为归档存储时，有以下取值：
<li>极速模式：Expedited，解冻任务在5分钟后完成。</li>
<li>标准模式：Standard，解冻任务在5小时后完成 。</li>
<li>批量模式：Bulk，，解冻任务在12小时后完成。</li>
当媒体文件的存储类型为深度归档存储时，有以下取值：
<li>标准模式：Standard，解冻任务在24小时后完成。</li>
<li>批量模式：Bulk，解冻任务在48小时后完成。</li>
                     */
                    void SetRestoreTier(const std::string& _restoreTier);

                    /**
                     * 判断参数 RestoreTier 是否已赋值
                     * @return RestoreTier 是否已赋值
                     */
                    bool RestoreTierHasBeenSet() const;

                    /**
                     * 获取点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @return SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @param SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 媒体文件唯一标识列表。
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 解冻出的临时媒体文件的可访问持续时长，单位为“天”。
                     */
                    uint64_t m_restoreDay;
                    bool m_restoreDayHasBeenSet;

                    /**
                     * 解冻模式。当媒体文件当前的存储类型为归档存储时，有以下取值：
<li>极速模式：Expedited，解冻任务在5分钟后完成。</li>
<li>标准模式：Standard，解冻任务在5小时后完成 。</li>
<li>批量模式：Bulk，，解冻任务在12小时后完成。</li>
当媒体文件的存储类型为深度归档存储时，有以下取值：
<li>标准模式：Standard，解冻任务在24小时后完成。</li>
<li>批量模式：Bulk，解冻任务在48小时后完成。</li>
                     */
                    std::string m_restoreTier;
                    bool m_restoreTierHasBeenSet;

                    /**
                     * 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIAREQUEST_H_
