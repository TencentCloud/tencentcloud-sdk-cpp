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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_SMSGETCROWDPACKLIST_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_SMSGETCROWDPACKLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 短信获取人群包列表的返回数据信息
                */
                class SmsGetCrowdPackList : public AbstractModel
                {
                public:
                    SmsGetCrowdPackList();
                    ~SmsGetCrowdPackList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取人群包id
                     * @return ID 人群包id
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置人群包id
                     * @param _iD 人群包id
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取人群包名称
                     * @return Name 人群包名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置人群包名称
                     * @param _name 人群包名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取人群包状态
                     * @return Status 人群包状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置人群包状态
                     * @param _status 人群包状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取人群包手机号数量
                     * @return PhoneNum 人群包手机号数量
                     * 
                     */
                    int64_t GetPhoneNum() const;

                    /**
                     * 设置人群包手机号数量
                     * @param _phoneNum 人群包手机号数量
                     * 
                     */
                    void SetPhoneNum(const int64_t& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取人群包标签信息
                     * @return Tag 人群包标签信息
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置人群包标签信息
                     * @param _tag 人群包标签信息
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取人群包md5
                     * @return MD5 人群包md5
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置人群包md5
                     * @param _mD5 人群包md5
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取人群包文件名称
                     * @return FileName 人群包文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置人群包文件名称
                     * @param _fileName 人群包文件名称
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
                     * 获取人群包描述
                     * @return Desc 人群包描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置人群包描述
                     * @param _desc 人群包描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 人群包id
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 人群包名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 人群包状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 人群包手机号数量
                     */
                    int64_t m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * 人群包标签信息
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 人群包md5
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * 人群包文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 人群包描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_SMSGETCROWDPACKLIST_H_
