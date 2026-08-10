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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXSTATUSITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXSTATUSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 漏洞/KB补丁维度修复状态
                */
                class VulFixStatusItem : public AbstractModel
                {
                public:
                    VulFixStatusItem();
                    ~VulFixStatusItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞ID（KB补丁修复任务时为空）
                     * @return VulId 漏洞ID（KB补丁修复任务时为空）
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置漏洞ID（KB补丁修复任务时为空）
                     * @param _vulId 漏洞ID（KB补丁修复任务时为空）
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取KB补丁ID（漏洞修复任务时为空）
                     * @return KBId KB补丁ID（漏洞修复任务时为空）
                     * 
                     */
                    int64_t GetKBId() const;

                    /**
                     * 设置KB补丁ID（漏洞修复任务时为空）
                     * @param _kBId KB补丁ID（漏洞修复任务时为空）
                     * 
                     */
                    void SetKBId(const int64_t& _kBId);

                    /**
                     * 判断参数 KBId 是否已赋值
                     * @return KBId 是否已赋值
                     * 
                     */
                    bool KBIdHasBeenSet() const;

                    /**
                     * 获取漏洞名称或KB补丁名称
                     * @return VulName 漏洞名称或KB补丁名称
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称或KB补丁名称
                     * @param _vulName 漏洞名称或KB补丁名称
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取该漏洞的修复状态
枚举值：
0：修复中
1：全部成功
2：部分失败
3：全部失败
                     * @return FixStatus 该漏洞的修复状态
枚举值：
0：修复中
1：全部成功
2：部分失败
3：全部失败
                     * 
                     */
                    int64_t GetFixStatus() const;

                    /**
                     * 设置该漏洞的修复状态
枚举值：
0：修复中
1：全部成功
2：部分失败
3：全部失败
                     * @param _fixStatus 该漏洞的修复状态
枚举值：
0：修复中
1：全部成功
2：部分失败
3：全部失败
                     * 
                     */
                    void SetFixStatus(const int64_t& _fixStatus);

                    /**
                     * 判断参数 FixStatus 是否已赋值
                     * @return FixStatus 是否已赋值
                     * 
                     */
                    bool FixStatusHasBeenSet() const;

                    /**
                     * 获取该漏洞/KB补丁关联的主机总数
                     * @return HostCount 该漏洞/KB补丁关联的主机总数
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置该漏洞/KB补丁关联的主机总数
                     * @param _hostCount 该漏洞/KB补丁关联的主机总数
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取该漏洞/KB补丁修复成功的主机数
                     * @return SuccessHostCount 该漏洞/KB补丁修复成功的主机数
                     * 
                     */
                    int64_t GetSuccessHostCount() const;

                    /**
                     * 设置该漏洞/KB补丁修复成功的主机数
                     * @param _successHostCount 该漏洞/KB补丁修复成功的主机数
                     * 
                     */
                    void SetSuccessHostCount(const int64_t& _successHostCount);

                    /**
                     * 判断参数 SuccessHostCount 是否已赋值
                     * @return SuccessHostCount 是否已赋值
                     * 
                     */
                    bool SuccessHostCountHasBeenSet() const;

                    /**
                     * 获取该漏洞/KB补丁修复失败的主机数
                     * @return FailHostCount 该漏洞/KB补丁修复失败的主机数
                     * 
                     */
                    int64_t GetFailHostCount() const;

                    /**
                     * 设置该漏洞/KB补丁修复失败的主机数
                     * @param _failHostCount 该漏洞/KB补丁修复失败的主机数
                     * 
                     */
                    void SetFailHostCount(const int64_t& _failHostCount);

                    /**
                     * 判断参数 FailHostCount 是否已赋值
                     * @return FailHostCount 是否已赋值
                     * 
                     */
                    bool FailHostCountHasBeenSet() const;

                private:

                    /**
                     * 漏洞ID（KB补丁修复任务时为空）
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * KB补丁ID（漏洞修复任务时为空）
                     */
                    int64_t m_kBId;
                    bool m_kBIdHasBeenSet;

                    /**
                     * 漏洞名称或KB补丁名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 该漏洞的修复状态
枚举值：
0：修复中
1：全部成功
2：部分失败
3：全部失败
                     */
                    int64_t m_fixStatus;
                    bool m_fixStatusHasBeenSet;

                    /**
                     * 该漏洞/KB补丁关联的主机总数
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 该漏洞/KB补丁修复成功的主机数
                     */
                    int64_t m_successHostCount;
                    bool m_successHostCountHasBeenSet;

                    /**
                     * 该漏洞/KB补丁修复失败的主机数
                     */
                    int64_t m_failHostCount;
                    bool m_failHostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXSTATUSITEM_H_
