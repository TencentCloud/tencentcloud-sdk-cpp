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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_SGUNIT_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_SGUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 安全组基础信息
                */
                class SgUnit : public AbstractModel
                {
                public:
                    SgUnit();
                    ~SgUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全组Id
                     * @return SgId 安全组Id
                     * 
                     */
                    std::string GetSgId() const;

                    /**
                     * 设置安全组Id
                     * @param _sgId 安全组Id
                     * 
                     */
                    void SetSgId(const std::string& _sgId);

                    /**
                     * 判断参数 SgId 是否已赋值
                     * @return SgId 是否已赋值
                     * 
                     */
                    bool SgIdHasBeenSet() const;

                    /**
                     * 获取安全组名称
                     * @return SgName 安全组名称
                     * 
                     */
                    std::string GetSgName() const;

                    /**
                     * 设置安全组名称
                     * @param _sgName 安全组名称
                     * 
                     */
                    void SetSgName(const std::string& _sgName);

                    /**
                     * 判断参数 SgName 是否已赋值
                     * @return SgName 是否已赋值
                     * 
                     */
                    bool SgNameHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return SgRemark 备注
                     * 
                     */
                    std::string GetSgRemark() const;

                    /**
                     * 设置备注
                     * @param _sgRemark 备注
                     * 
                     */
                    void SetSgRemark(const std::string& _sgRemark);

                    /**
                     * 判断参数 SgRemark 是否已赋值
                     * @return SgRemark 是否已赋值
                     * 
                     */
                    bool SgRemarkHasBeenSet() const;

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

                private:

                    /**
                     * 安全组Id
                     */
                    std::string m_sgId;
                    bool m_sgIdHasBeenSet;

                    /**
                     * 安全组名称
                     */
                    std::string m_sgName;
                    bool m_sgNameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_sgRemark;
                    bool m_sgRemarkHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_SGUNIT_H_
