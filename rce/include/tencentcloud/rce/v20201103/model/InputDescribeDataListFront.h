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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDESCRIBEDATALISTFRONT_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDESCRIBEDATALISTFRONT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 查询黑白名单数据入参
                */
                class InputDescribeDataListFront : public AbstractModel
                {
                public:
                    InputDescribeDataListFront();
                    ~InputDescribeDataListFront() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名单ID
                     * @return NameListId 名单ID
                     * 
                     */
                    int64_t GetNameListId() const;

                    /**
                     * 设置名单ID
                     * @param _nameListId 名单ID
                     * 
                     */
                    void SetNameListId(const int64_t& _nameListId);

                    /**
                     * 判断参数 NameListId 是否已赋值
                     * @return NameListId 是否已赋值
                     * 
                     */
                    bool NameListIdHasBeenSet() const;

                    /**
                     * 获取当前页数
                     * @return PageNumber 当前页数
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置当前页数
                     * @param _pageNumber 当前页数
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页显示条数	
                     * @return PageSize 每页显示条数	
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页显示条数	
                     * @param _pageSize 每页显示条数	
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取搜索关键字，按照名单数据名称或加密名单数据名称搜索
                     * @return KeyWord 搜索关键字，按照名单数据名称或加密名单数据名称搜索
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置搜索关键字，按照名单数据名称或加密名单数据名称搜索
                     * @param _keyWord 搜索关键字，按照名单数据名称或加密名单数据名称搜索
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取黑白名单列表状态[1 启用 2 停用]
                     * @return Status 黑白名单列表状态[1 启用 2 停用]
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置黑白名单列表状态[1 启用 2 停用]
                     * @param _status 黑白名单列表状态[1 启用 2 停用]
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 名单ID
                     */
                    int64_t m_nameListId;
                    bool m_nameListIdHasBeenSet;

                    /**
                     * 当前页数
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示条数	
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 搜索关键字，按照名单数据名称或加密名单数据名称搜索
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * 黑白名单列表状态[1 启用 2 停用]
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDESCRIBEDATALISTFRONT_H_
