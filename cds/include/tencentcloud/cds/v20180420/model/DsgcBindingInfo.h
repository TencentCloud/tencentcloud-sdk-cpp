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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_DSGCBINDINGINFO_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_DSGCBINDINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * 资产 DSGC 绑定信息
                */
                class DsgcBindingInfo : public AbstractModel
                {
                public:
                    DsgcBindingInfo();
                    ~DsgcBindingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取dspa实例id
                     * @return DspaId dspa实例id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置dspa实例id
                     * @param _dspaId dspa实例id
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取dspa绑定模板/合规组 id ComplianceGroupId
                     * @return DspaCgId dspa绑定模板/合规组 id ComplianceGroupId
                     * 
                     */
                    uint64_t GetDspaCgId() const;

                    /**
                     * 设置dspa绑定模板/合规组 id ComplianceGroupId
                     * @param _dspaCgId dspa绑定模板/合规组 id ComplianceGroupId
                     * 
                     */
                    void SetDspaCgId(const uint64_t& _dspaCgId);

                    /**
                     * 判断参数 DspaCgId 是否已赋值
                     * @return DspaCgId 是否已赋值
                     * 
                     */
                    bool DspaCgIdHasBeenSet() const;

                    /**
                     * 获取dspa绑定模板/合规组名称
                     * @return DspaCgName dspa绑定模板/合规组名称
                     * 
                     */
                    std::string GetDspaCgName() const;

                    /**
                     * 设置dspa绑定模板/合规组名称
                     * @param _dspaCgName dspa绑定模板/合规组名称
                     * 
                     */
                    void SetDspaCgName(const std::string& _dspaCgName);

                    /**
                     * 判断参数 DspaCgName 是否已赋值
                     * @return DspaCgName 是否已赋值
                     * 
                     */
                    bool DspaCgNameHasBeenSet() const;

                    /**
                     * 获取dspa实例状态 0 正常 1 隔离 2 销毁
                     * @return DspaStatus dspa实例状态 0 正常 1 隔离 2 销毁
                     * 
                     */
                    uint64_t GetDspaStatus() const;

                    /**
                     * 设置dspa实例状态 0 正常 1 隔离 2 销毁
                     * @param _dspaStatus dspa实例状态 0 正常 1 隔离 2 销毁
                     * 
                     */
                    void SetDspaStatus(const uint64_t& _dspaStatus);

                    /**
                     * 判断参数 DspaStatus 是否已赋值
                     * @return DspaStatus 是否已赋值
                     * 
                     */
                    bool DspaStatusHasBeenSet() const;

                    /**
                     * 获取模板状态 0: 正常   1: 已删除
                     * @return DspaCgStatus 模板状态 0: 正常   1: 已删除
                     * 
                     */
                    uint64_t GetDspaCgStatus() const;

                    /**
                     * 设置模板状态 0: 正常   1: 已删除
                     * @param _dspaCgStatus 模板状态 0: 正常   1: 已删除
                     * 
                     */
                    void SetDspaCgStatus(const uint64_t& _dspaCgStatus);

                    /**
                     * 判断参数 DspaCgStatus 是否已赋值
                     * @return DspaCgStatus 是否已赋值
                     * 
                     */
                    bool DspaCgStatusHasBeenSet() const;

                private:

                    /**
                     * dspa实例id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * dspa绑定模板/合规组 id ComplianceGroupId
                     */
                    uint64_t m_dspaCgId;
                    bool m_dspaCgIdHasBeenSet;

                    /**
                     * dspa绑定模板/合规组名称
                     */
                    std::string m_dspaCgName;
                    bool m_dspaCgNameHasBeenSet;

                    /**
                     * dspa实例状态 0 正常 1 隔离 2 销毁
                     */
                    uint64_t m_dspaStatus;
                    bool m_dspaStatusHasBeenSet;

                    /**
                     * 模板状态 0: 正常   1: 已删除
                     */
                    uint64_t m_dspaCgStatus;
                    bool m_dspaCgStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_DSGCBINDINGINFO_H_
