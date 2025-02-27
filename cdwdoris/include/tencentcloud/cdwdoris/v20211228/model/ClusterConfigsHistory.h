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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CLUSTERCONFIGSHISTORY_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CLUSTERCONFIGSHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 集群的配置文件的修改历史
                */
                class ClusterConfigsHistory : public AbstractModel
                {
                public:
                    ClusterConfigsHistory();
                    ~ClusterConfigsHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计算组id
                     * @return ComputeGroupId 计算组id
                     * 
                     */
                    std::string GetComputeGroupId() const;

                    /**
                     * 设置计算组id
                     * @param _computeGroupId 计算组id
                     * 
                     */
                    void SetComputeGroupId(const std::string& _computeGroupId);

                    /**
                     * 判断参数 ComputeGroupId 是否已赋值
                     * @return ComputeGroupId 是否已赋值
                     * 
                     */
                    bool ComputeGroupIdHasBeenSet() const;

                    /**
                     * 获取配置文件名称
                     * @return FileName 配置文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置配置文件名称
                     * @param _fileName 配置文件名称
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取修改后的配置文件内容，base64编码
                     * @return NewConfValue 修改后的配置文件内容，base64编码
                     * 
                     */
                    std::string GetNewConfValue() const;

                    /**
                     * 设置修改后的配置文件内容，base64编码
                     * @param _newConfValue 修改后的配置文件内容，base64编码
                     * 
                     */
                    void SetNewConfValue(const std::string& _newConfValue);

                    /**
                     * 判断参数 NewConfValue 是否已赋值
                     * @return NewConfValue 是否已赋值
                     * 
                     */
                    bool NewConfValueHasBeenSet() const;

                    /**
                     * 获取修改前的配置文件内容，base64编码
                     * @return OldConfValue 修改前的配置文件内容，base64编码
                     * 
                     */
                    std::string GetOldConfValue() const;

                    /**
                     * 设置修改前的配置文件内容，base64编码
                     * @param _oldConfValue 修改前的配置文件内容，base64编码
                     * 
                     */
                    void SetOldConfValue(const std::string& _oldConfValue);

                    /**
                     * 判断参数 OldConfValue 是否已赋值
                     * @return OldConfValue 是否已赋值
                     * 
                     */
                    bool OldConfValueHasBeenSet() const;

                    /**
                     * 获取修改原因
                     * @return Remark 修改原因
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置修改原因
                     * @param _remark 修改原因
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取修改子账号id
                     * @return UserUin 修改子账号id
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置修改子账号id
                     * @param _userUin 修改子账号id
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                private:

                    /**
                     * 计算组id
                     */
                    std::string m_computeGroupId;
                    bool m_computeGroupIdHasBeenSet;

                    /**
                     * 配置文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 修改后的配置文件内容，base64编码
                     */
                    std::string m_newConfValue;
                    bool m_newConfValueHasBeenSet;

                    /**
                     * 修改前的配置文件内容，base64编码
                     */
                    std::string m_oldConfValue;
                    bool m_oldConfValueHasBeenSet;

                    /**
                     * 修改原因
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 修改子账号id
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CLUSTERCONFIGSHISTORY_H_
